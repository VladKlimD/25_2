#include <iostream>
#include <fstream>
#include <vector>
#include "disk.h"

void save(std::vector<int>& input_Buffer) {
    std::ofstream file("data.txt");
    if (!file.is_open()) {
        std::cerr << "Cannot open the file\n";
        return;
    }
    for (int i = 0; i < input_Buffer.size(); i++) {
        file << input_Buffer[i] << ".";
    }
    file.close();
}

void load(std::vector<int>& input_Buffer) {
    std::ifstream file("data.txt");
    if (!file.is_open()) {
        std::cerr << "Cannot open the file\n";
        return;
    }
    input_Buffer.clear();
    while (!file.eof()) {
        int buffer_Element;
        file >> buffer_Element;
        input_Buffer.push_back(buffer_Element);
        char plug;
        file >> plug;
    }
    file.close();
    input_Buffer.pop_back();
}