#include <iostream>
#include "ui.h"

using namespace std;

int main() {
    //init table
    record List[100];
    int currentRecord = 0;

    while (true) {
        ui(List, &currentRecord);
    }
}