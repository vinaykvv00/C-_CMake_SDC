#include "Student.h"
#include "Teacher.h"
#include "Course.h"
#include "Department.h"
#include <iostream>

int main() {
    try {
        Teacher* mathTeacher = new Teacher("dr. Anil Kumar", 45, "Mathematics");
        Teacher* physicsTeacher = new Teacher(" proff . Priya Sharma", 38, "Physics");

        Student* studentAmit = new Student("Amith ", 19, 201);
        Student* studentNeha = new Student("Neha Singh", 20, 202);
        Student* studentRahul = new Student("Rahul", 21, 203);

        Course* mathematics = new Course("Mathematics", mathTeacher);
        Course* physics = new Course("Physics", physicsTeacher);

        mathematics->addStudent(studentAmit);
        mathematics->addStudent(studentNeha);
        physics->addStudent(studentAmit);
        physics->addStudent(studentRahul);

        mathematics->assignGrade(studentAmit, 'A');
        mathematics->assignGrade(studentNeha, 'B');
        physics->assignGrade(studentAmit, 'A');
        physics->assignGrade(studentRahul, 'C');

        Department* csDept = new Department("Computer Science");
        csDept->addCourse(mathematics);
        csDept->addCourse(physics);

        csDept->displayDepartmentInfo();

        try {
            mathematics->assignGrade(studentAmit, 'G');
        } catch (const std::invalid_argument& e) {
            std::cout << "Error: " << e.what() << std::endl;
        }

        delete studentAmit;
        delete studentNeha;
        delete studentRahul;
        delete mathTeacher;
        delete physicsTeacher;
        delete mathematics;
        delete physics;
        delete csDept;

    } catch (const std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
