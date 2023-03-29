#include <iostream>
#include "table.h"

using namespace std;

//Wyświetla listę studentów
void printList(struct record List[], int *currentRecord) {

    for(int i=0; i<*currentRecord; i++) {
        cout << List[i].name << "   " << List[i].surname << "   " << List[i].index << endl;
    }
}

//Pobieranie wejścia od użytkowanika z klawiatury
string input(string option) {

    string userInput;

    if (option == "index")
        cout << "Podaj indeks: ";

    else if (option == "name")
        cout << "Podaj imię: ";

    else if (option == "surname")
        cout << "Podaj nazwisko: ";
    
    cin >> userInput;
    return userInput;
}

//Bazowa funkcja zarządzania interfejsem i służąca do komunikacji z użytkownikiem
void ui(struct record List[], int *currentRecord) {

    int operation;
    cout << "\n";
    cout << "1. Wyświetl listę\n2.Dodaj wpis do listy\nPodaj opcje: ";
    cin >> operation;
    if (operation == 1) 
        printList(List, currentRecord);
    else if (operation == 2)
        newRecord(input("index"), input("name"), input("surname"), List, currentRecord);
}