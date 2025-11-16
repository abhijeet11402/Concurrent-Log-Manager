#pragma once
#include "Logger.h"
#include <string>

class Worker {
private:
    Logger& logger;
    std::string name;
public:
    Worker(Logger& log, const std::string& workerName);
    void operator()(); // function call operator for thread
};
