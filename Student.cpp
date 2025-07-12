#include "Student.h"
#include <iostream>

void Student::display() const {
    std::cout << "Name: " << name << ", Grade: " << grade << std::endl;
}
