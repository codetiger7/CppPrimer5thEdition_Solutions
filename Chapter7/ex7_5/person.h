#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person
{
public:

    inline const std::string& getName() const { return name_; }
    inline const std::string& getAddress() const { return address_; }

private:
    std::string name_;
    std::string address_;

};

#endif // PERSON_H
