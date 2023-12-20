#pragma once
#include "Sportsman.h"

class Coach : public Sportsman {
public:
    Coach() {
        std::cout << "Coach Constructor\n";
    }
    ~Coach() {
        std::cout << "Coach Destructor\n";
    }
    void display() override {
        std::cout << "Coach\n";
    }
};