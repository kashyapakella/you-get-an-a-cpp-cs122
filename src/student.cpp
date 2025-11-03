#include <string>
#include <iostream>
#include <iomanip>

#include "student.hpp"

Student::Student(std::string f, std::string l, int s)
{

    firstName = f;
    lastName = l;
    studentID = s;
}

void Student::addAssignment(std::string n, int points)
{

    assignments.push_back(n);
    grades.push_back(-1.0);
}

void Student::setGrade(std::string name, double grade)
{

    for (int i = 0; i < assignments.size(); i++)
    {

        if (assignments[i] == name)
        {

            grades[i] = grade;
            return;
        }
    }

    std::cout << "Assignment '" << name << "' not found for " << getName() << ".\n";
}

std::string Student::getName()
{

    return firstName + " " + lastName;
}

int Student::getID()
{

    return studentID;
}

void Student::printGrades()
{

    std::cout << std::left << std::setw(20) << getName();

    for (int i = 0; i < grades.size(); i++)
    {

        if (grades[i] < 0)
        {

            std::cout << std::setw(10) << "N/A";
        }
        else
        {
            std::cout << std::setw(10) << grades[i];
        }
    }
    std::cout << "\n";
}
