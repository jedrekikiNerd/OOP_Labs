#include <fstream>
#include "Worker.h"

class PersonList
{
    private:
        int size = 0;
        Person** list = new Person*[size];
    
    public:
        /**
         * Getter for person of given number from person array
         * 
         * @param number - int index of person in list we want to get
         * @return pointer to person object in array of Person that has given index
        */
        Person* getPerson(int number);

        /**
         * Adds new person to our list
         * 
         * @param Person pointer to object of Person class
         * @return exitCode
        */
        int addPerson(Person *newPerson);

        /**
         * @return size of array
        */
        int getSize() {return size;};

        /**
         * Removes person object from list
         * 
         * @param number - int representing line we want to remove
         * @return exitCode 0 is success, 1 is wrong number
        */
        int removePerson(int number);

        /**
         * Reads file in order to use previously saved list
         * 
         * @param path string representing path to file
         * @return exitCode 1 if file error, 0 if success
        */
        int readfile(std::string path);

        /**
         * Saves people list to file
         * 
         * @param path string representing path to file
         * @return exitCode 1 if file error, 0 if success
        */
        int writefile(std::string path);
        

};