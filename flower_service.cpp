
#include "flower_service.h"

FlowerService::FlowerService(std::shared_ptr<IRepository> r, std::shared_ptr<ILogger> l)
    : repo(std::move(r)), logger(std::move(l)) {}

void FlowerService::addFlower(const Flower& flower) {
    repo->add(flower);
    logger->log("Added flower: " + flower.name);
}

std::vector<Flower> FlowerService::listFlowers() {
    return repo->getAll();
}