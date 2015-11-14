#include <iostream>
#include <iostream>
#include <sales_data.h>
using namespace std;



Sales_data add(const Sales_data& lhs, const Sales_data& rhs)
{
    Sales_data sum = lhs;   // copy data members from lhs into sum
    sum.combine(rhs);       // add data members from rhs into sum
    return sum;
}

ostream& print(ostream& os, const Sales_data& item)
{
    os << item.isbn() << " " <<
       << item.revenue_;  // << " " << item.avg_price();

    return os;
}




int main()
{
    return 0;
}

