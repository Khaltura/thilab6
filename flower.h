
#ifndef FLOWER_H
#define FLOWER_H

#include <string>
#include <vector>

class Flower {
public:
    std::string name;
    std::string color;
    double price;

    Flower(const std::string& n, const std::string& c, double p);
    void print() const;
};

class Bouquet {
private:
    std::vector<Flower> flowers;
public:
    void addFlower(const Flower& flower);
    void print() const;
};

#endif // FLOWER_H