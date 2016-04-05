#ifndef SALES_DATA_H
#define SALES_DATA_H

#include <iostream>
#include <string>

class Sales_data
{
public:

    Sales_data() : unitsSold_(0), revenue_(0) {}
    Sales_data(const std::string& s) : bookNo_(s) {}
    Sales_data(const std::string& s, unsigned n, double p) :
        bookNo_(s), unitsSold_(n), revenue_(n*p) {}
    Sales_data(std::istream& in);

    std::string isbn() const { return bookNo_; }
    Sales_data& combine(const Sales_data& data);
    double avg_price() const;

private:
    std::string bookNo_;
    unsigned unitsSold_ = 0;
    double revenue_ = 0.0;

    friend Sales_data add(const Sales_data& lhs, const Sales_data& rhs);
    friend std::ostream& print(std::ostream&, const Sales_data&);
    friend std::istream& read(std::istream&, Sales_data&);

};

Sales_data add(const Sales_data& lhs, const Sales_data& rhs);
std::ostream& print(std::ostream&, const Sales_data&);
std::istream& read(std::istream&, Sales_data&);


inline
double Sales_data::avg_price() const
{
    if (unitsSold_ > 0)
        return revenue_ / unitsSold_;
    return 0.0;
}

#endif // SALES_DATA_H
