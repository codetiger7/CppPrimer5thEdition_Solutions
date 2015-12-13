
#include <string>
#include <iostream>

struct Sales_data
{
    // constructors added
    Sales_data() = default;

    Sales_data(const std::string& s)
        : bookNo(s){}

    Sales_data(const std::string& s, unsigned n, double p)
      : bookNo(s)
      , units_sold(n)
      , revenue(p*n)
    {  }

     Sales_data(std::istream&);

     // other members as before
     std::string isbn() const { return bookNo; }
     double avg_price() const;

     std::string bookNo;
     unsigned units_sold = 0;
     double revenue = 0.0;



};
