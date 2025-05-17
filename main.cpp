
#include "flower_repository.h"
#include "file_logger.h"
#include "flower_factory.h"
#include "flower_service.h"
#include "console_ui.h"
#include <memory>

int main() {
    auto repo = std::make_shared<FlowerRepository>();
    auto logger = std::make_shared<FileLogger>("log.txt");
    auto factory = std::make_shared<SimpleFlowerFactory>();
    FlowerService service(repo, logger);
    ConsoleUI ui(service, factory);
    ui.run();
    return 0;
}