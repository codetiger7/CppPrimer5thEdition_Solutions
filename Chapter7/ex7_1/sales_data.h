#ifndef SALES_DATA
#define SALES_DATA

#include <string>

struct Sales_data
{
    std::string bookNo_;
    unsigned unitsSold_ = 0;
    double revenue_ = 0.0;
};


void
priceIsRight(Sales_data& a, Sales_data& b)
{
    a.revenue_ *= a.unitsSold_;
    b.revenue_ *= b.unitsSold_;
    a.revenue_ += b.revenue_; // total rev

    a.unitsSold_ += b.unitsSold_; // total units

    a.revenue_ /= a.unitsSold_; // avg price
}


#endif // SALES_DATA

