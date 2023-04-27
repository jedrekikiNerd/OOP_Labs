#include "Person.h"

int Person::setId(std::string value) {
    int result = validateId(value);
    if (result == 0) {
        id = value;
        return 0;
    }
    else
        return result;
}

void Person::setName(std::string value) {
    name = value;
}

void Person::setSurname(std::string value) {
    surname = value;
}

int Person::validateId(std::string value) {
    if (value.size() > 11)
        return 1;
    else if (value.size() < 11)
        return 2;
    
    return 0;
}