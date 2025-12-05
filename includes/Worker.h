#pragma once
#include "Logger.h"
#include <string>

// Worker class represents a thread worker that logs messages
class Worker {
private:
    Logger& logger;        // Shared Logger instance (used by multiple threads)
    std::string name;    // Name of the worker (e.g., Worker-1)
public:
    // Constructor
    Worker(Logger& log, const std::string& workerName);

     // Overloaded function call operator so the object can be used as a thread
    void operator()(); // function call operator for thread
};

