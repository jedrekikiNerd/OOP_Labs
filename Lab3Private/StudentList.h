#include <iostream>
#include <Student.h>

class AttendanceList
{
    private:
        int size = 1;
        Student* list = new Student[size];
    
    public:
        /**
         * @param int number - index of student in list we want to get
         * @return Student object in array of students that has given index
        */
        Student getStudent(int number);
        /**
         * @param Student student object
         * @return exitCode
        */
        int addStudent(Student newStudent);
        /**
         * @return size of students list
        */
        int getSize();
        /**
         * @param string number - index of student in list to remove
         * @return exitCode
        */
        int removeStudent(int number);
        

};