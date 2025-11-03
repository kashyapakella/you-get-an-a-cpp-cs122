#include <string>
#include <iostream>
#include <iomanip>
#include "gradebook.hpp"

void Gradebook::addStudent(std::string first, std::string last, int id)
{

   Student newStudent(first, last, id);

   for (int i = 0; i < assignments.size(); i++)
   {
      newStudent.addAssignment(assignments[i].name, assignments[i].totalPoints);
   }

   students.push_back(newStudent);
}

void Gradebook::addAssignment(std::string name, int totalPoints)
{

   assignments.push_back({name, totalPoints});

   for (int i = 0; i < students.size(); i++)
   {

      students[i].addAssignment(name, totalPoints);
   }
}

void Gradebook::grade(int studentID, std::string assignmentName, double grade)
{

   for (int i = 0; i < students.size(); i++)
   {

      if (students[i].getID() == studentID)
      {
         students[i].setGrade(assignmentName, grade);
         return;
      }
   }
   std::cout << "Student ID " << studentID << " not found.\n";
}

void Gradebook::print()
{

   std::cout << "Name" << "\t    ";

   for (int i = 0; i < assignments.size(); i++)
   {

      std::cout << std::setw(10) << assignments[i].name;
   }
   std::cout << "\n";

   for (int i = 0; i < students.size(); i++)
   {

      students[i].printGrades();
   }
}

std::vector<Student> Gradebook::getStudents()
{

   return students;
}

std::vector<Assignment> Gradebook::getAssignments()
{

   return assignments;
}