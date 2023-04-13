#include "Student.h"

int Student::setIndex(std::string value) {
    int result = validateIndex(value);
    if (result == 0) {
        index = value;
        return 0;
    }
    else
        return result;
}

void Student::setName(std::string value) {
    name = value;
}

void Student::setSurname(std::string value) {
    surname = value;
}

int Student::validateIndex(std::string value) {
    if (value.size() > 11)
        return 1;
    else if (value.size() < 11)
        return 2;
    
    return 0;
}