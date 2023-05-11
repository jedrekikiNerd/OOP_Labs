#include <iostream>
#include "ui.h"

using namespace std;

//Wyświetla listę studentów
void printList(PersonList* list) {
    for(int i=0; i<list->getSize(); i++) {
        //cout << (i+1) << "   " << list->getPerson(i).getName() << "   " << list->getPerson(i).getSurname() << "   " << list->getPerson(i).getId() << endl;
        cout << list->getPerson(i).toString();
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
void ui(PersonList* list) {

    int operation;
    cout << "\n";
    cout << "1. Wyświetl listę\n2.Dodaj wpis do listy\nPodaj opcje: ";
    cin >> operation;
    if (operation == 1) 
        printList(list);
    else if (operation == 2) {
        cout << "1. Dodaj studenta\n2.Dodaj pracownika\nPodaj opcje: ";
        cin >> operation;

        if (operation == 1)
            newRecord(input("id"), input("name"), input("surname"), list, "student");
        else if (operation == 2)
            newRecord(input("id"), input("name"), input("surname"), list, "worker");
    }
    else if (operation == 3)
        list->writefile("file.txt");
}