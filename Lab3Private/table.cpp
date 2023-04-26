#include <iostream>
#include "table.h"

using namespace std;

//Dodaje nowy indeks do tablicy
int newRecord(string id, string name, string surname, AttendanceList* list) {
    Student newStudent;
    int exitCode = newStudent.setId(id);
    if (exitCode == 1) {
        cout << "ERROR: Podany pesel jest za długi (pesel musi mieć 11 znaków)\n";
        return exitCode;
    }
    else if (exitCode == 2) {
        cout << "ERROR: Podany pesel jest za krótki (pesel musi mieć 11 znaków)\n";
        return exitCode;
    }
    
    newStudent.setName(name);
    newStudent.setSurname(surname);
    list->addStudent(newStudent);
    return exitCode;
}