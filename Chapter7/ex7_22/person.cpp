#include "person.h"
#include <string>

Person::Person(std::istream &in)
{
    read(in, *this);
}

inline
const std::string&
Person::getName() const
{
    return name_;
}

inline
const std::string&
Person::getAddress() const
{
    return address_;
}

std::ostream&
print(std::ostream& out, const Person& p)
{
    out << p.getName() << " "
        << p.getAddress();
    return out;
}

std::istream&
read(std::istream& in, Person& p)
{
    in >> p.name_ >> p.address_;
    return in;
}
