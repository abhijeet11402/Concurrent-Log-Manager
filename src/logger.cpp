#include "Logger.h"
#include <iostream>

// Adds a log message to the vector safely using mutex
void Logger::log(const std::string& message) {

    // Lock the mutex before modifying shared data
    std::lock_guard<std::mutex> lock(mtx);

    // Store the log message
    log_messages.push_back(message);
}

// Prints all stored logs safely
void Logger::printLogs() {

     // Lock the mutex before reading shared data
    std::lock_guard<std::mutex> lock(mtx); // lock mutex while printing
    std::cout << "---- Log Start ----" << std::endl;
    
    // Print each stored log message
    for (const auto& msg : log_messages) {
        std::cout << msg << std::endl;
    }
    std::cout << "---- Log End ----" << std::endl;
}

