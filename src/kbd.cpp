#include <iostream>
#include <vector>
#include "kbd.h"
#include "ram.h"

void input() {
    std::vector<int> input_Buffer;
    std::cout << "Input buffer:\n";
    for (int i = 0; i < 8; i++) {
        int buffer_Element;
        std::cin >> buffer_Element;
        input_Buffer.push_back(buffer_Element);
    }
    read(input_Buffer);
}