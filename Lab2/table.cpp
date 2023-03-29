#include <iostream>

using namespace std;

//Dodaje nowy indeks do tablicy
void newRecord(string record, string Table[], int *currentRecord) {
    Table[*currentRecord] = record;
    *currentRecord += 1;
}