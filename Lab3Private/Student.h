#include "Person.h"

class Student : public Person
{
    private:
        std::string index;

    public:
        int setIndex(std::string value);
        std::string getIndex() {return index;}
        virtual int setSpecialId(std::string specialId);
        virtual std::string toString();
        virtual std::string getType();

};