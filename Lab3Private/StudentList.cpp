#include "StudentList.h"


Student AttendanceList::getStudent(int number) {
    return list[number];
}

int AttendanceList::addStudent(Student newStudent) {
    Student *tmp = new Student[size+1];

    for(int i=0; i<size; i++)
        tmp[i] = list[i];

    tmp[size] = newStudent;
    delete [] list;
    size += 1;
    list = tmp;
    return 0;
}

int AttendanceList::removeStudent(int number) {
    Student *tmp = new Student[size-1];

    for(int i=0; i<=size; i++) {
        if(i != number)
            tmp[i] = list[i];
    }

    size -= 1;
    delete [] list;
    list = tmp;
    return 0;

}

int AttendanceList::readfile(std::string path) {
    std::fstream file;
    std::string line;
    file.open(path);

    if ( !file.good() ) {
        return 1;
    }

    while ( !file.eof() ) {
        Student newStudent;
        std::string id;
        std::string name;
        std::string surname;
        file >> id;
        file >> name;
        file >> surname;
        newStudent.setId(id);
        newStudent.setName(name);
        newStudent.setSurname(surname);
        addStudent(newStudent);
    }
    file.close();
    return 0;
}

int AttendanceList::writefile(std::string path){
    std::ofstream file;
    file.open(path);
    if ( !file.good() ) {
        return 1;
    }

    for ( int row=0; row < size; row++ ) {
        std::string line = "";
        line += getStudent(row).getId();
        line += " ";
        line += getStudent(row).getName();
        line += " ";
        line += getStudent(row).getSurname();
        line += "\n";
        file << line;

    }
    return 0;
}