#include "PersonList.h"


Person PersonList::getPerson(int number) {
    return list[number];
}

int PersonList::addPerson(Person newPerson) {
    Person *tmp = new Person[size+1];

    for(int i=0; i<size; i++)
        tmp[i] = list[i];

    tmp[size] = newPerson;
    delete [] list;
    size += 1;
    list = tmp;
    return 0;
}

int PersonList::removePerson(int number) {
    Person *tmp = new Person[size-1];

    for(int i=0; i<=size; i++) {
        if(i != number)
            tmp[i] = list[i];
    }

    size -= 1;
    delete [] list;
    list = tmp;
    return 0;

}

int PersonList::readfile(std::string path) {
    std::fstream file;
    std::string line;
    file.open(path);
    
    if ( !file.good() ) {
        return 1;
    }

    while ( !file.eof() ) {
        Person newPerson;
        std::string id;
        std::string name;
        std::string surname;
        file >> id;
        file >> name;
        file >> surname;
        newPerson.setId(id);
        newPerson.setName(name);
        newPerson.setSurname(surname);
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
        line += getPerson(row).getId();
        line += " ";
        line += getPerson(row).getName();
        line += " ";
        line += getPerson(row).getSurname();
        line += "\n";
        file << line;

    }
    return 0;
}