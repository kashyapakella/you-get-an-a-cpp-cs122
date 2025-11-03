#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include <gradebook.hpp>

TEST_CASE("Adding students")
{

    Gradebook g;

    g.addStudent("Bob", "Smith", 1);
    g.addStudent("Allie", "Smith", 2);

    REQUIRE(g.getStudents().size() == 2);
    REQUIRE(g.getStudents()[0].getID() == 1);
    REQUIRE(g.getStudents()[1].getID() == 2);
}

TEST_CASE("Adding assignments")
{

    Gradebook g;

    g.addAssignment("HW1", 100);
    g.addAssignment("HW2", 50);

    REQUIRE(g.getAssignments().size() == 2);
    REQUIRE(g.getAssignments()[0].name == "HW1");
}
