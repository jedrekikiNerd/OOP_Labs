#include "Worker.h"

int Worker::setWorkerId(std::string value) {
    workerId = value;
    return 0;
}

std::string Worker::toString() {
    std::string output = "";
    output += this->getId();
    output += " ";
    output += this->getName();
    output += " ";
    output += this->getSurname();
    output += " ";
    output += this->getWorkerId();
    return output;
}

int Worker::setSpecialId(std::string specialId) {
    this->setWorkerId(specialId);
    return 0;
}

std::string Worker::getType() {
    return "Worker";
}