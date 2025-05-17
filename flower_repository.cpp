
#include "flower_repository.h"

void FlowerRepository::add(const Flower& flower) {
    storage.push_back(flower);
}

std::vector<Flower> FlowerRepository::getAll() const {
    return storage;
}