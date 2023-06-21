#include <iostream>
#include "ui.h"

using namespace std;

//Wyświetla listę studentów
void printList(PersonList* list) {
    system("clear");
    for(int i=0; i<list->getSize(); i++) {
        cout << list->getPerson(i)->toString();
        cout << endl;
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

    else if (option == "workerID")
        cout << "Podaj id pracownicze: ";

    else if (option == "index")
        cout << "Podaj indeks: ";
    

    cin >> userInput;
    return userInput;
}

//Bazowa funkcja zarządzania interfejsem i służąca do komunikacji z użytkownikiem
int ui(PersonList* list) {

    int operation;
    cout << "\n";
    cout << "1. Wyświetl listę\n2.Dodaj wpis do listy\n3.Zapisz do pliku\n4.Usuń z listy\n5. Wyjście\nPodaj opcje: ";
    cin >> operation;
    system("clear");
    if (operation == 1)
        printList(list);
    else if (operation == 2) {
        cout << "1. Dodaj studenta\n2.Dodaj pracownika\nPodaj opcje: ";
        cin >> operation;

        if (operation == 1)
            newRecord(input("id"), input("name"), input("surname"), list, "student", input("index"));
        else if (operation == 2)
            newRecord(input("id"), input("name"), input("surname"), list, "worker", input("workerID"));
    }
    else if (operation == 3) {
        if (list->writefile("file.txt"))
            cout << "ERROR: Błąd zapisywania pliku!";
        else
            cout << "Pomyślnie zapisano plik!";
    }
    else if (operation == 4) {
        int number;
        cout << "Podaj numer linijki którą chcesz usunąć: ";
        cin >> number;
        if (list->removePerson(number))
            cout << "ERROR: Podano numer linijki leżący poza zakresem!";
        else
            cout << "Usunięto pomyślnie!";
    }
    else if (operation == 5)
        return 1;
    cout << "\n\n\nWciśnij enter, aby kontynuować...";
    cin.ignore();
    cin.ignore();
    system("clear");

    return 0;
}