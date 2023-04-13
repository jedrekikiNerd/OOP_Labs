#include <iostream>
#include "Student.h"

using namespace std;

//Dodaje nowy indeks do tablicy
int newRecord(string index, string name, string surname, Student List[], int *currentRecord) {
    int exitCode = List[*currentRecord].setIndex(index);
    
    if (exitCode == 1) {
        cout << "ERROR: Podany pesel jest za długi (pesel musi mieć 11 znaków)\n";
        return exitCode;
    }
    else if (exitCode == 2) {
        cout << "ERROR: Podany pesel jest za krótki (pesel musi mieć 11 znaków)\n";
        return exitCode;
    }
    
    List[*currentRecord].setName(name);
    List[*currentRecord].setSurname(surname);
    *currentRecord += 1;
    return exitCode;
}