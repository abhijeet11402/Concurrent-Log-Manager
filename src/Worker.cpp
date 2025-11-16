#include "Worker.h"
#include <thread>
#include <chrono>

Worker::Worker(Logger& log, const std::string& workerName)
    : logger(log), name(workerName) {}

void Worker::operator()() {
    for (int i = 1; i <= 5; ++i) {
        std::string message = name + " logging message " + std::to_string(i);
        logger.log(message);

        // Simulate some work
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }
}
