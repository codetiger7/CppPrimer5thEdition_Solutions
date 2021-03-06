
#include <sales_data.h>
#include <iostream>

using namespace std;


Sales_data&
Sales_data::combine(const Sales_data &data)
{
    units_sold += data.units_sold;
    revenue_ += data.revenue_;
    return *this;
}

double
Sales_data::avg_price() const
{
    if (units_sold > 0.0)
        return revenue_ / units_sold;
    else
      return 0.0;
}

Sales_data
add(const Sales_data& lhs, const Sales_data& rhs)
{
    Sales_data sum = lhs;   // copy data members from lhs into sum
    sum.combine(rhs);       // add data members from rhs into sum
    return sum;
}


istream&
read(istream& is, Sales_data& item)
{
  double price = 0;
  is >> item.bookNo_ >> item.units_sold >> price;
  item.revenue_ = price * item.units_sold;
  return is;
}

ostream&
print(ostream& os, const Sales_data& item)
{
    os << item.isbn() << " " << item.units_sold << " "
       <<item.revenue_ << " " << item.avg_price();
    return os;
}
