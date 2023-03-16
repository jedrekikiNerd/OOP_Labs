#include <iostream>

using namespace std;

void initTable() {
    string Table[100];
    int currentRecord = 0;
}

//Dodaje nowy indeks do tablicy
void newRecord(string record, string Table[], int currentRecord) {
    Table[currentRecord] = record;
    currentRecord += 1;
}