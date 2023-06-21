#include <iostream>
#include "IPrintable.h"
#include "ITypeinfo.h"

//Class of person, base class for workers and students in our list
class Person : public IPrintable, public ITypeinfo
{
    protected:
        std::string name;
        std::string surname;
        std::string id;
        int validateId(std::string value);
    
    public:
        /**
         * Interaface implementation, returns string representation of object
         * 
         * @return string that represents object
        */
        virtual std::string toString();
        /**
         * Function returns type of object
         * 
         * @return string informing about type of object
        */
        virtual std::string getType();
        virtual int setSpecialId(std::string specialId) = 0;
        /**
         * Function sets ID of class person and returns 0 if success
         * 
         * @param string $value must contain 11 characters
         * @return int exitCode 0 is success, 1 means too long, 2 means too short
        */
        int setId(std::string value);
        /**
         * Setter of person name
         * 
         * @param string name of person
        */
        void setName(std::string value);
        /**
         * Setter of person surname
         * 
         * @param string surname of person
        */
        void setSurname(std::string value);
        std::string getId() {return id;}
        std::string getName() {return name;}
        std::string getSurname() {return surname;}

};