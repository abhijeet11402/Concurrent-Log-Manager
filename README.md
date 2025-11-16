## Project Overview

The Concurrent Log Manager is a simple C++ project demonstrating multithreading, thread synchronization, and basic OS-level concepts.
Multiple threads write messages to a shared log in a thread-safe manner using mutexes.
This project is ideal for learning multithreading, mutexes, and thread-safe programming in C++.

## Features

Thread-safe logging using std::mutex and std::lock_guard
Multiple worker threads writing concurrently to a shared log
Simulates work with thread sleep (std::this_thread::sleep_for)
Organized project structure with src/ and include/ folders
