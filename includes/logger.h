#pragma once
#include <vector>
#include <string>
#include <mutex>

class Logger {
private:
    std::vector<std::string> log_messages; // stores log messages
    std::mutex mtx;                        // Mutex to protect shared data
public:
    void log(const std::string& message);  // add message thread-safely
    void printLogs();                       // Prints all stored log messages safely
};

