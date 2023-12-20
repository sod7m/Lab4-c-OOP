#pragma once
#include "Sportsman.h"

class Teacher : public Sportsman {
public:
    Teacher() {
        std::cout << "Teacher Constructor\n";
    }
    ~Teacher() {
        std::cout << "Teacher Destructor\n";
    }
    void display() override {
        std::cout << "Teacher\n";
    }
};