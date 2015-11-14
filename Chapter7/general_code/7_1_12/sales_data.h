#ifndef SALES_DATA
#define SALES_DATA

#include <iostream>
#include <string>

struct Sales_data
{
    std::string isbn() const {return bookNo;}
    Sales_data& combine(const Sales_data&);
    double avg_price() const;

    std::string bookNo;
    unsigned units_sold;
    double revenue = 0.0;
};


Sales_data add(const Sales_data&, const Sales_data&);
std::ostream& print(std::ostream, Sales_data&);
std::istream& read(std::istream&, Sales_data&);


#endif // SALES_DATA

