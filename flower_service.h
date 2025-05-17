
#ifndef FLOWER_SERVICE_H
#define FLOWER_SERVICE_H

#include "interfaces.h"
#include <memory>
#include <vector>

class FlowerService {
    std::shared_ptr<IRepository> repo;
    std::shared_ptr<ILogger> logger;
public:
    FlowerService(std::shared_ptr<IRepository> r, std::shared_ptr<ILogger> l);
    void addFlower(const Flower& flower);
    std::vector<Flower> listFlowers();
};

#endif // FLOWER_SERVICE_H