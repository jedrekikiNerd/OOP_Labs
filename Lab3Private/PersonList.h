#include <fstream>
#include "Worker.h"

class PersonList
{
    private:
        int size = 0;
        Person* list = new Person[size];
    
    public:
        /**
         * @param int number - index of person in list we want to get
         * @return person object in array of people that has given index
        */
        Person getPerson(int number);

        /**
         * @param Person object
         * @return exitCode
        */
        int addPerson(Person newPerson);

        /**
         * @param Student object
         * @return exitCode
        */
        int getSize() {return size;};

        /**
         * @param string number - what number is person on the list to remove
         * @return exitCode
        */
        int removePerson(int number);

        /**
         * @param string path to file
         * @return 1 if file error
        */
        int readfile(std::string path);

        /**
         * @param string path to file
         * @return 1 if file error
        */
        int writefile(std::string path);
        

};