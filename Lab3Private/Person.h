#include <iostream>

class Person
{
    protected:
        std::string name;
        std::string surname;
        std::string id;
        int validateId(std::string value);
    
    public:
        /**
         * @param string $value must contain 11 characters
         * @return int exitCode
         * exitCodes:
         * 0 - index set succesfully
         * 1 - given value is too long
         * 2 - given value is too short
        */
        int setId(std::string value);
        void setName(std::string value);
        void setSurname(std::string value);
        std::string getId() {return id;}
        std::string getName() {return name;}
        std::string getSurname() {return surname;}

};