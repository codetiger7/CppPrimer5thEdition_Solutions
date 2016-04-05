#ifndef SALES_DATA_H
#define SALES_DATA_H

#include <string>
#include <iostream>

class Sales_data
{
public:
    Sales_data(std::string s, unsigned cnt, double price)
        : bookNo(s)
        , units_sold(cnt)
        , revenue(cnt * price)
    {
        std::cout << "three argument constructor0" << std::endl;
    }

    Sales_data()
        : Sales_data("", 0, 0.0)
    {
        std::cout << "default constructor1\n";
    }

    Sales_data(std::string s)
        : Sales_data(s, 0, 0.0)
    {
        std::cout << "string argument constructor2\n" << std::endl;
    }

    Sales_data(std::istream& is)
        : Sales_data()
    {
        std::cout << "istream constructor3\n" << std::endl;
    }

private:
    std::string bookNo;
    unsigned units_sold;
    double revenue;

};

#endif // SALES_DATA_H
