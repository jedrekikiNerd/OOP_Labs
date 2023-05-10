#include <iostream>
#include "Student.h"

class Worker : public Person
{
    private:
        std::string workerId;
        
    public:
        int setWorkerId(std::string value);
        std::string getWorkerId() {return workerId;}

};