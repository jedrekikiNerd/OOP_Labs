#include <iostream>
#include "ui.h"

using namespace std;

int main() {
    //init table
    string Table[100];
    int currentRecord = 0;

    while (true) {
        ui(Table, &currentRecord);
    }
}