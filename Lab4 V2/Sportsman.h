#pragma once
#include <iostream>
#include <fstream>

class Sportsman {
public:
    Sportsman() {
        std::cout << "Sportsman Constructor\n";
    }
    virtual ~Sportsman() {
        std::cout << "Sportsman Destructor\n";
    }
    virtual void display() {
        std::cout << "Sportsman\n";
    }
};
// Покажчик - це змінна, яка зберігає адресу в пам’яті.