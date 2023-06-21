#include <iostream>

//inteface for printing text representation of data in object
class IPrintable
{
    public:
        virtual std::string toString() = 0;

};