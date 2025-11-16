#pragma once
#include <vector>
#include <string>
#include <mutex>

class Logger {
private:
    std::vector<std::string> log_messages; // stores log messages
    std::mutex mtx;                        // protects log_messages
public:
    void log(const std::string& message);  // add message thread-safely
    void printLogs();                       // print all logs
};
