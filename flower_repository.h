
#ifndef FLOWER_REPOSITORY_H
#define FLOWER_REPOSITORY_H

#include "interfaces.h"
#include <vector>

class FlowerRepository : public IRepository {
    std::vector<Flower> storage;
public:
    void add(const Flower& flower) override;
    std::vector<Flower> getAll() const override;
};

#endif // FLOWER_REPOSITORY_H