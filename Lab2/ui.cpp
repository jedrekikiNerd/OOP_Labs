#include <iostream>
#include "table.h"

using namespace std;

//Wyświetla listę studentów
void printList(string Table[], int *currentRecord) {

    for(int i=0; i<*currentRecord; i++) {
        cout << Table[i] << endl;
    }
}

//Pobieranie wejścia od użytkowanika z klawiatury
string input() {

    string userInput;
    cout << "Podaj indeks: ";
    cin >> userInput;
    return userInput;
}

void ui(string Table[], int *currentRecord) {

    int operation;
    cout << "\n";
    cout << "1. Wyświetl listę\n2.Dodaj wpis do listy\nPodaj opcje: ";
    cin >> operation;
    if (operation == 1) 
        printList(Table, currentRecord);
    else if (operation == 2)
        newRecord(input(), Table, currentRecord);
}