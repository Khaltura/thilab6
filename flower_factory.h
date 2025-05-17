
#ifndef FLOWER_FACTORY_H
#define FLOWER_FACTORY_H

#include "interfaces.h"

class SimpleFlowerFactory : public IFlowerFactory {
public:
    Flower create(const std::string& name, const std::string& color, double price) override;
};

#endif // FLOWER_FACTORY_H