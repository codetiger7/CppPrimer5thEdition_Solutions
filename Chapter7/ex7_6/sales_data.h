#ifndef SALES_DATA_H
#define SALES_DATA_H

#include <iostream>
#include <string>

struct Sales_data
{

public:
    std::string isbn() const { return bookNo_; }
    Sales_data& combine(const Sales_data& data);
    double avg_price() const;

    std::string bookNo_;
    unsigned units_sold = 0;
    double revenue_ = 0.0;
};

// nonmember Sales_data interface functions
Sales_data add(const Sales_data& lhs, const Sales_data& rhs);
std::istream& read(std::istream&, Sales_data&);
std::ostream& print(std::ostream&, const Sales_data&);

#endif // SALES_DATA_H
