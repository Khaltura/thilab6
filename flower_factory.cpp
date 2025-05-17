
#include "flower_factory.h"
#include "flower.h"

Flower SimpleFlowerFactory::create(const std::string& name, const std::string& color, double price) {
    return Flower(name, color, price);
}