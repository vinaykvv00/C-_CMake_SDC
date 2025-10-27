#include "Student1.h"
#include "Teacher1.h"
#include "Course1.h"
#include "Department1.h"
#include <iostream>
#include <memory>

int main() {
    try {
        auto mathTeacher = std::make_unique<Teacher1>("Dr. Anil Kumar", 45, "Mathematics");
        auto physicsTeacher = std::make_unique<Teacher1>("Prof. Priya Sharma", 38, "Physics");

        auto studentAmit  = std::make_shared<Student1>("Amith", 19, 201);
        auto studentNeha  = std::make_shared<Student1>("Neha Singh", 20, 202);
        auto studentRahul = std::make_shared<Student1>("Rahul", 21, 203);

        auto mathematics = std::make_unique<Course1>("Mathematics", std::move(mathTeacher));
        auto physics     = std::make_unique<Course1>("Physics", std::move(physicsTeacher));

        mathematics->addStudent(studentAmit);
        mathematics->addStudent(studentNeha);
        physics->addStudent(studentAmit);
        physics->addStudent(studentRahul);

        mathematics->assignGrade(studentAmit, 'A');
        mathematics->assignGrade(studentNeha, 'B');
        physics->assignGrade(studentAmit, 'A');
        physics->assignGrade(studentRahul, 'C');

        try {
            mathematics->assignGrade(studentAmit, 'G'); 
        } catch (const std::invalid_argument &e) {
            std::cout << "Error: " << e.what() << std::endl;
        }

        auto csDept = std::make_unique<Department1>("Computer Science");
        csDept->addCourse(std::move(mathematics));
        csDept->addCourse(std::move(physics));

        csDept->displayDepartmentInfo();
    }
    catch (const std::exception &e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
