#ifndef TIMER_H
#define TIMER_H

#include <chrono>
#include <thread>
#include <iostream>

class Timer {
    std::chrono::time_point<std::chrono::high_resolution_clock> start;
    std::chrono::time_point<std::chrono::high_resolution_clock> end;
    std::chrono::duration<float> duration;
public:

    Timer()
    {
        start = std::chrono::high_resolution_clock::now();
    }
    ~Timer()
    {
        end = std::chrono::high_resolution_clock::now();
        duration = end - start;
        float ms = duration.count() * 1000.0f;
        std::cout << "...." << ms << "ms" << '\n';
    }

};
#endif