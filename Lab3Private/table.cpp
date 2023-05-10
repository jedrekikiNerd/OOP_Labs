#include <iostream>
#include "table.h"

using namespace std;

//Dodaje nowy indeks do tablicy
int newRecord(string id, string name, string surname, PersonList* list, string type) {
    Person newPerson;
    Student newStudent;
    Worker newWorker;
    int exitCode = newPerson.setId(id);
    if (exitCode == 1) {
        cout << "ERROR: Podany pesel jest za długi (pesel musi mieć 11 znaków)\n";
        return exitCode;
    }
    else if (exitCode == 2) {
        cout << "ERROR: Podany pesel jest za krótki (pesel musi mieć 11 znaków)\n";
        return exitCode;
    }

    newPerson.setName(name);
    newPerson.setSurname(surname);

    if (type == "student") {
        newStudent.setId(newPerson.getId());
        newStudent.setName(newPerson.getName());
        newStudent.setSurname(newPerson.getSurname());
        list->addPerson(newStudent);
    }
    else if (type == "worker") {
        newWorker.setId(newPerson.getId());
        newWorker.setName(newPerson.getName());
        newWorker.setSurname(newPerson.getSurname());
        list->addPerson(newWorker);
    }
    else
        list->addPerson(newPerson);
    
    return exitCode;
}