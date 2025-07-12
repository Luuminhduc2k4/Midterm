#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "Student.h"
#include "Gradebook.h"

int main() {
    Gradebook gb;

    gb.loadFromFile("students.txt");

    gb.displayAll();

    std::string searchName;
    std::cout << "Enter student name to search: ";
    std::getline(std::cin, searchName);
    gb.binarySearch(searchName);

    gb.addStudent("Alex", 88);
    gb.addStudent("Mia", 93);

    gb.saveToFile("students.txt");

    return 0;
}
