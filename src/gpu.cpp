#include <iostream>
#include <vector>
#include "gpu.h"
#include "ram.h"

void display() {
    std::vector<int> input_Buffer;
    write(input_Buffer);
    for (int i = 0; i < input_Buffer.size(); i++) {
        std::cout << input_Buffer[i] << " ";
    }
    std::cout << std::endl;
}