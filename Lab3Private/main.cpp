#include <iostream>
#include "ui.h"

using namespace std;

int main() {
    //init table
    PersonList list;
    list.readfile("file.txt");
    PersonList* ptr;
    ptr = &list;

    while (true) {
        ui(ptr);
    }
    return 0;
}