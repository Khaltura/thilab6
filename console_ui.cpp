#include "console_ui.h"
#include <iostream>
#include <limits> // для очистки ввода

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

            std::cout << "Name: ";
            std::cin >> name;

            std::cout << "Color: ";
            std::cin >> color;

            std::cout << "Price: ";
            std::cin >> price;

            // Проверка на корректность ввода и отрицательную цену
            if (std::cin.fail() || price < 0) {
                std::cin.clear(); // сброс флага ошибки
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // очистка ввода
                std::cout << "Error: Price must be a non-negative number.\n";
                continue;
            }

            try {
                Flower flower = factory->create(name, color, price);
                service.addFlower(flower);
            } catch (const std::exception& ex) {
                std::cout << "Error: " << ex.what() << "\n";
            }

        } else if (choice == 2) {
            auto flowers = service.listFlowers();
            if (flowers.empty()) {
                std::cout << "No flowers available.\n";
            } else {
                for (const auto& f : flowers) {
                    f.print();
                }
            }
        }

    } while (choice != 3);
}
