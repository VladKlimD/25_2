#include <vector>
#include "ram.h"

std::vector<int> buffer(8, 0);

void read(std::vector<int>& input_Buffer) {
    buffer = input_Buffer;
}

void write(std::vector<int>& output_Buffer) {
    output_Buffer = buffer;
}