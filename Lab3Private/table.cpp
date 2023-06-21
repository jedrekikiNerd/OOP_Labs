#include <iostream>
#include "table.h"

using namespace std;

//Dodaje nowy indeks do tablicy
int newRecord(string id, string name, string surname, PersonList* list, string type, std::string specialId) {
    Person *newPerson;
    if (type == "student") {
        newPerson = new Student();
        newPerson->setSpecialId(specialId);
    }
    else if (type == "worker") {
        newPerson = new Worker();
        newPerson->setSpecialId(specialId);
    }
    int exitCode = newPerson->setId(id);
    if (exitCode == 1) {
        cout << "ERROR: Podany pesel jest za długi (pesel musi mieć 11 znaków)\n";
        delete newPerson;
        return exitCode;
    }
    else if (exitCode == 2) {
        cout << "ERROR: Podany pesel jest za krótki (pesel musi mieć 11 znaków)\n";
        delete newPerson;
        return exitCode;
    }

    newPerson->setName(name);
    newPerson->setSurname(surname);
    
    list->addPerson(newPerson);
    
    return exitCode;
}