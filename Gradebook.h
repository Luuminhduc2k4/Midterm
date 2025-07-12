#ifndef GRADEBOOK_H
#define GRADEBOOK_H

#include "Student.h"
#include <vector>
#include <string>

class Gradebook {
private:
    std::vector<Student*> students;

public:
    ~Gradebook();
    void addStudent(std::string name, int grade);
    void displayAll() const;
    void loadFromFile(const std::string& filename);
    void saveToFile(const std::string& filename) const;
    void binarySearch(const std::string& name) const;
};

#endif
