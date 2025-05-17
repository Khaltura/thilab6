
#ifndef INTERFACES_H
#define INTERFACES_H

#include <string>
#include <vector>
#include "flower.h"

class ILogger {
public:
    virtual void log(const std::string& message) = 0;
    virtual ~ILogger() = default;
};

class IRepository {
public:
    virtual void add(const Flower& flower) = 0;
    virtual std::vector<Flower> getAll() const = 0;
    virtual ~IRepository() = default;
};

class IFlowerFactory {
public:
    virtual Flower create(const std::string& name, const std::string& color, double price) = 0;
    virtual ~IFlowerFactory() = default;
};

#endif // INTERFACES_H