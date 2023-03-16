#include <iostream>
#include "table.h"

using namespace std;

//Wyświetla listę studentów
void printList() {

    for(int i=0; i<100; i++) {
        cout << Table[i] << endl;
    }
}

//Pobieranie wejścia od użytkowanika z klawiatury
void input() {

    string userInput;
    cout << "Podaj indeks: ";
    cin >> userInput;
    newRecord(userInput);
}

void ui() {

    int operation;
    cout << "Witaj!\n";
    cout << "1. Wyświetl listę\n2.Dodaj wpis do listy\nPodaj opcje: ";
    cin >> operation;
    if (operation == 1) 
        printList();
    else if (operation == 2)
        input();
}