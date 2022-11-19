#include "StudentList.h"

Student* StudentList::get_student(int student_ID) {
    Student obj;
    for (int i = 0; i<list.size(); i++){
        if(list[i].student_ID == student_ID){
            obj = list[i];
        }
    }
    return obj;
    }

void StudentList::add_student(int student_ID, std::string name) {
    Student obj = create_student(student_ID, name);
    list.insert(obj);
}
