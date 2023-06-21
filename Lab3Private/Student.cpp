#include "Student.h"

int Student::setIndex(std::string value) {
    index = value;
    return 0;
}

std::string Student::toString() {
    std::string output = "";
    output += this->getId();
    output += " ";
    output += this->getName();
    output += " ";
    output += this->getSurname();
    output += " ";
    output += this->getIndex();
    return output;
}

int Student::setSpecialId(std::string specialId) {
    this->setIndex(specialId);
    return 0;
}

std::string Student::getType() {
    return "Student";
}