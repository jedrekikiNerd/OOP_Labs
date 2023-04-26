#include <iostream>
#include "ui.h"

using namespace std;

int main() {
    //init table
    AttendanceList list;
    list.readfile("file.txt");
    AttendanceList* ptr;
    ptr = &list;

    while (true) {
        ui(ptr);
    }
    return 0;
}