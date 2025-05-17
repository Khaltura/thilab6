
#ifndef CONSOLE_UI_H
#define CONSOLE_UI_H

#include "flower_service.h"
#include "interfaces.h"
#include <memory>

class ConsoleUI {
    FlowerService service;
    std::shared_ptr<IFlowerFactory> factory;
public:
    ConsoleUI(FlowerService s, std::shared_ptr<IFlowerFactory> f);
    void run();
};

#endif // CONSOLE_UI_H