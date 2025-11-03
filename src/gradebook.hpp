#include <string>
#include <vector>
#include "student.hpp"

struct Assignment
{
    std::string name;
    int totalPoints;
};
class Gradebook
{

private:
    std::vector<Student> students;
    std::vector<Assignment> assignments;

public:
    void addStudent(std::string first, std::string last, int id);
    void addAssignment(std::string name, int totalPoints);
    void grade(int studentID, std::string assignmentName, double grade);
    void print();
    std::vector<Student> getStudents();
    std::vector<Assignment> getAssignments();
};