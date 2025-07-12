#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student {
private:
    std::string name;
    int grade;

public:
    Student(std::string n = "", int g = 0) : name(n), grade(g) {}

    std::string getName() const { return name; }
    int getGrade() const { return grade; }

    void display() const;
};

#endif
