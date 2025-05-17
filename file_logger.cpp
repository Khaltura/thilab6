
#include "file_logger.h"
#include <fstream>
#include <ctime>

FileLogger::FileLogger(const std::string& fname) : filename(fname) {}

void FileLogger::log(const std::string& message) {
    std::ofstream out(filename, std::ios::app);
    time_t now = time(nullptr);
    out << std::ctime(&now) << ": " << message << "\n";
}