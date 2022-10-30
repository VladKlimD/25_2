#include <iostream>
#include <string>
#include "cpu.h"
#include "disk.h"
#include "gpu.h"
#include "kbd.h"
#include "ram.h"

int main() {
    std::string command;
    for (;;) {
        std::cout << "Input command\n";
        std::cin >> command;
        if (command == "sum") compute(buffer);
        else if (command == "save") save(buffer);
        else if (command == "load") load(buffer);
        else if (command == "input") write(buffer);
        else if (command == "display") read(buffer);
        else if (command == "exit") break;
        else std::cerr << "Unknown command. Retry your enter\n";
    }
}
