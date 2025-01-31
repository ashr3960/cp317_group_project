#ifndef STUDENT_LIST_H_
#define STUDENT_LIST_H_

#include <vector>
#include <string>
#include "Student.h"

class StudentList {
    std::vector<Student> list;

    public:
        Student* get_student(int student_ID);
        void add_student(int student_ID, std::string name);
};

#endif