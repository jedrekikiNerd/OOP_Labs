#include <iostream>
#include "Student.h"

using namespace std;

//Dodaje nowy indeks do tablicy
void newRecord(string index, string name, string surname, Student List[], int *currentRecord) {
    List[*currentRecord].index = index;
    List[*currentRecord].name = name;
    List[*currentRecord].surname = surname;
    *currentRecord += 1;
}