#include <iostream>
#include "ui.h"

using namespace std;

//Wyświetla listę studentów
void printList(AttendanceList list) {

    for(int i=0; i<list.getSize(); i++) {
        cout << i << "   " << list.getStudent(i).getName() << "   " << list.getStudent(i).getSurname() << "   " << list.getStudent(i).getId() << endl;
    }
}

//Pobieranie wejścia od użytkowanika z klawiatury
string input(string option) {

    string userInput;

    if (option == "id")
        cout << "Podaj pesel: ";

    else if (option == "name")
        cout << "Podaj imię: ";

    else if (option == "surname")
        cout << "Podaj nazwisko: ";
    
    cin >> userInput;
    return userInput;
}

//Bazowa funkcja zarządzania interfejsem i służąca do komunikacji z użytkownikiem
void ui(AttendanceList list) {

    int operation;
    cout << "\n";
    cout << "1. Wyświetl listę\n2.Dodaj wpis do listy\nPodaj opcje: ";
    cin >> operation;
    if (operation == 1) 
        printList(list);
    else if (operation == 2)
        newRecord(input("id"), input("name"), input("surname"), list);
}