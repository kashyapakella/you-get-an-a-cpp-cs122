#include <iostream>

#include "gradebook.hpp"

int main()
{

  Gradebook g;

  g.addAssignment("HW1", 100);
  g.addAssignment("HW2", 50);

  g.addStudent("Bob", "Smith", 101);
  g.addStudent("Allie", "Smith", 102);

  g.grade(101, "HW1", 95);
  g.grade(101, "HW2", 45);
  g.grade(102, "HW1", 88);

  g.print();
}
