#include "Worker.h"
#include <thread>
#include <chrono>

// Constructor assigns the shared logger and worker name
Worker::Worker(Logger& log, const std::string& workerName)
    : logger(log), name(workerName) {}

// This function is executed when the thread starts
void Worker::operator()() {
    // Each worker logs 5 messages
    for (int i = 1; i <= 5; ++i) {
         // Create a log message with worker name and message number
        std::string message = name + " logging message " + std::to_string(i);
        
        // Send the log message to the shared logger (thread-safe)
        logger.log(message);

        // Simulate work using a delay of 100 milliseconds
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }
}

