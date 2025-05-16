#include <bits/stdc++.h>
// #include "Timer.h"
// #include <iostream>
// #include <map>

int main() 
{
    // [2 4 1 4 2]
    std::map<int, int> m;
    int size, num;
    std::cin >> size;
    // creating the frequency map
    for (int i = 0; i < size; i++)
    {
        std::cin >> num;
        m[num]++;
    }
    int count = 0;
    for (auto map : m)
    {
        if (map.first != map.second)
        {
            if (map.first < map.second) {
                count += (map.second - map.first);
                continue;
            }
            count += map.second;
        }
    }
    std::cout << count;

    // for (auto map : m)
    //     std::cout << '\n' << map.first << " - " << map.second << '\n';
}