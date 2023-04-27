#include "Person.h"

class Student : public Person
{
    private:
        std::string index;

    public:
        int setIndex(std::string value);
        void setName(std::string value);
        std::string getIndex() {return index;}

};