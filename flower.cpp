
#include "flower.h"
#include <iostream>

Flower::Flower(const std::string& n, const std::string& c, double p)
    : name(n), color(c), price(p) {}

void Flower::print() const {
    std::cout << name << " (" << color << ") - $" << price << "\n";
}

void Bouquet::addFlower(const Flower& flower) {
    flowers.push_back(flower);
}

void Bouquet::print() const {
    std::cout << "Bouquet contains:\n";
    for (const auto& f : flowers) {
        f.print();
    }
}