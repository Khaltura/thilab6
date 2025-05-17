#include "console_ui.h"
#include <iostream>

ConsoleUI::ConsoleUI(FlowerService s, std::shared_ptr<IFlowerFactory> f)
    : service(std::move(s)), factory(std::move(f)) {}

void ConsoleUI::run() {
    int choice;
    do {
        std::cout << "\n1. Add flower\n2. Show flowers\n3. Exit\n> ";
        std::cin >> choice;
        if (choice == 1) {
            std::string name, color;
            double price;
            std::cout << "Name: "; std::cin >> name;
            std::cout << "Color: "; std::cin >> color;
            std::cout << "Price: "; std::cin >> price;
            Flower flower = factory->create(name, color, price);
            service.addFlower(flower);
        } else if (choice == 2) {
            auto flowers = service.listFlowers();
            for (const auto& f : flowers) {
                f.print();
            }
        }
    } while (choice != 3);
}