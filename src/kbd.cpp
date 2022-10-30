#include <iostream>
#include <vector>
#include "kbd.h"

void write(std::vector<int>& input_Buffer) {
    std::cout << "Input buffer:\n";
    for (int i = 0; i < input_Buffer.size(); i++) {
        std::cin >> input_Buffer[i];
    }
}