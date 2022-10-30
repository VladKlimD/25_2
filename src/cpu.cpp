#include <iostream>
#include <vector>
#include "cpu.h"

void compute(std::vector<int>& input_Buffer) {
    int sum = 0;
    for (int i = 0; i < input_Buffer.size(); i++) {
        sum += input_Buffer[i];
    }
    std::cout << "Sum: " << sum << std::endl;
}