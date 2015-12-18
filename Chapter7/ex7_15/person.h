#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>

class Person
{
public:
    Person() = default;
    Person(std::string n, std::string add)
        : name_(n)
        , address_(add)
        {
        }

    Person(std::istream& in);

    const std::string& getName() const;
    const std::string& getAddress() const;

    std::string name_;
    std::string address_;
};

std::istream& read(std::istream&, Person&);
std::ostream& print(std::ostream&, const Person&);




#endif // PERSON_H
