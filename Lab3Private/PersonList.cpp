#include "PersonList.h"
#include <assert.h>

Person *PersonList::getPerson(int number) {
    return list[number];
}

int PersonList::addPerson(Person* newPerson) {
    Person **tmp = new Person*[size+1];

    for(int i=0; i<size; i++)
        tmp[i] = list[i];

    tmp[size] = newPerson;
    delete [] list;
    size += 1;
    list = tmp;
    return 0;
}

int PersonList::removePerson(int number) {
    if (number>size || number<=0)
        return 1;
    Person **tmp = new Person*[size-1];

    int k = 0;
    for(int i=0; i<size; i++) {
        if(i != number-1) {
            tmp[k] = list[i];
            k++;
        }
    }
    size -= 1;
    delete [] list;
    list = tmp;
    return 0;
}

int PersonList::readfile(std::string path) {
    std::fstream file;
    file.open(path);
    
    if ( !file.good() ) {
        return 1;
    }

    while ( !file.eof() ) {
        Person *newPerson;
        std::string type;
        std::string id;
        std::string specialID = "";
        std::string name;
        std::string surname;

        file >> type;
        if (type == "") {
            delete newPerson;
            return 1;
        }
        file >> id;
        file >> name;
        file >> surname;

        if (type == "Student") {
            file >> specialID;
            newPerson = new Student();
            newPerson->setSpecialId(specialID);
        }
        else if (type == "Worker") {
            file >> specialID;
            newPerson = new Worker();
            newPerson->setSpecialId(specialID);
        }

        newPerson->setId(id);
        newPerson->setName(name);
        newPerson->setSurname(surname);
        addPerson(newPerson);
    }
    file.close();
    return 0;
}

int PersonList::writefile(std::string path){
    std::ofstream file;
    file.open(path);
    if ( !file.good() ) {
        return 1;
    }

    for ( int row=0; row < size; row++ ) {
        std::string line = "";
        Person *tmpPersonPointer = getPerson(row);
        line += tmpPersonPointer->getType();
        line += " ";
        line += tmpPersonPointer->toString();
        if (row != (size-1))
            line += "\n";
        file << line;

    }
    return 0;
}