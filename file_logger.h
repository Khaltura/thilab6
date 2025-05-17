
#ifndef FILE_LOGGER_H
#define FILE_LOGGER_H

#include "interfaces.h"
#include <string>

class FileLogger : public ILogger {
    std::string filename;
public:
    FileLogger(const std::string& fname);
    void log(const std::string& message) override;
};

#endif // FILE_LOGGER_H