#include <string>
#include <vector>

class Student
{

private:
    std::string firstName;
    std::string lastName;
    int studentID;
    std::vector<double> grades;
    std::vector<std::string> assignments;

public:
    Student(std::string f, std::string l, int s);
    void addAssignment(std::string name, int grade);
    void setGrade(std::string name, double grade);
    std::string getName();
    void printGrades();
    int getID();
};