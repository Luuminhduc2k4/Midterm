#include "Gradebook.h"
#include <iostream>
#include <fstream>
#include <algorithm>

Gradebook::~Gradebook() {
    for (auto s : students) delete s;
}

void Gradebook::addStudent(std::string name, int grade) {
    students.push_back(new Student(name, grade));
}

void Gradebook::displayAll() const {
    std::cout << "Student List:\n";
    for (const auto& s : students) s->display();
}

void Gradebook::loadFromFile(const std::string& filename) {
    std::ifstream inFile(filename);
    std::string name;
    int grade;
    while (inFile >> name >> grade) {
        addStudent(name, grade);
    }
    inFile.close();
}

void Gradebook::saveToFile(const std::string& filename) const {
    std::ofstream outFile(filename);
    for (const auto& s : students) {
        outFile << s->getName() << " " << s->getGrade() << std::endl;
    }
    outFile.close();
}

void Gradebook::binarySearch(const std::string& name) const {
    std::vector<std::string> names;
    for (const auto& s : students) {
        names.push_back(s->getName());
    }
    std::sort(names.begin(), names.end());
    bool found = std::binary_search(names.begin(), names.end(), name);
    if (found)
        std::cout << name << " found!\n";
    else
        std::cout << name << " not found.\n";
}
