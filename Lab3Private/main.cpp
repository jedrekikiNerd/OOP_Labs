#include <iostream>
#include "ui.h"

using namespace std;

int main() {
    //init table
    PersonList list;

    //List readfile and wait for user
    if(list.readfile("file.txt"))
        cout << "Nie wczytano danych z żadnego pliku\n";
    cout << "\nWciśnij enter, aby rozpocząć...";
    cin.ignore();
    system("clear");

    //Make pointer to our list
    PersonList* ptr;
    ptr = &list;

    //Go into mainloop
    while (true) {
        if(ui(ptr))
            break;
    }
    return 0;
}