#include <iostream>

//Interface for type of object info
class ITypeinfo
{
    public:
        virtual std::string getType() = 0;

};