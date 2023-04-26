#include <iostream>
#include "ui.h"

using namespace std;

int main() {
    //init table
    AttendanceList list;
    int currentRecord = 0;

    while (true) {
        ui(list);
    }
    return 0;
}