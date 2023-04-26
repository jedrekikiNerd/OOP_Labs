#include "StudentList.h"


Student AttendanceList::getStudent(int number) {
    return list[number];
}

int AttendanceList::addStudent(Student newStudent) {
    Student *tmp = new Student[size+1];

    for(int i=0; i<size; i++)
        tmp[i] = list[i];

    size = size + 1;
    tmp[size] = newStudent;
    delete [] list;
    list = tmp;
    return 0;
}

int AttendanceList::getSize() {
    return size;
}

int AttendanceList::removeStudent(int number) {
    Student *tmp = new Student[size-1];

    for(int i=0; i<=size; i++) {
        if(i != number)
            tmp[i] = list[i];
    }

    size = size - 1;
    delete [] list;
    list = tmp;
    return 0;

}