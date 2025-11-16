#include "Logger.h"
#include <iostream>

void Logger::log(const std::string& message) {
    std::lock_guard<std::mutex> lock(mtx); // lock mutex while writing
    log_messages.push_back(message);
}

void Logger::printLogs() {
    std::lock_guard<std::mutex> lock(mtx); // lock mutex while printing
    std::cout << "---- Log Start ----" << std::endl;
    for (const auto& msg : log_messages) {
        std::cout << msg << std::endl;
    }
    std::cout << "---- Log End ----" << std::endl;
}
