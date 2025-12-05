#include "Worker.h"
#include "Logger.h"
#include <thread>
#include <vector>

int main() {
    Logger logger;  // Create a single shared Logger instance

    // Create multiple worker objects sharing the same logger
    Worker w1(logger, "Worker-1");
    Worker w2(logger, "Worker-2");
    Worker w3(logger, "Worker-3");

    // Launch workers as separate threads
    std::thread t1(w1);
    std::thread t2(w2);
    std::thread t3(w3);

    // Wait for all threads to complete execution
    t1.join();
    t2.join();
    t3.join();

    // After all workers finish, print the collected logs
    logger.printLogs();

    return 0;
}

