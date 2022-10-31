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
        if (command == "sum") compute();
        else if (command == "save") save();
        else if (command == "load") load();
        else if (command == "input") input();
        else if (command == "display") display();
        else if (command == "exit") break;
        else std::cerr << "Unknown command. Retry your enter\n";
    }
}
