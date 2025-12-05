#include "Worker.h"
#include "Logger.h"
#include <thread>
#include <vector>

int main() {
    Logger logger;  // Shared logger

    // Create workers
    Worker w1(logger, "Worker-1");
    Worker w2(logger, "Worker-2");
    Worker w3(logger, "Worker-3");

    // Launch threads
    std::thread t1(w1);
    std::thread t2(w2);
    std::thread t3(w3);

    // Wait for threads to complete
    t1.join();
    t2.join();
    t3.join();

    // Print logs after all threads complete
    logger.printLogs();

    return 0;
}
