#include <iostream>

class Student 
{
    private:
        std::string name;
        std::string surname;
        std::string index;
        int validateIndex(std::string value);
    
    public:
        /**
         * @param string $value must contain 11 characters
         * @return int exitCode
         * exitCodes:
         * 0 - index set succesfully
         * 1 - given value is too long
         * 2 - given value is too short
        */
        int setIndex(std::string value);
        void setName(std::string value);
        void setSurname(std::string value);
        std::string getIndex() {return index;}
        std::string getName() {return name;}
        std::string getSurname() {return surname;}

};