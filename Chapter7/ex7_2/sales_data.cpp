

#include <sales_data.h>


Sales_data&
Sales_data::combine(const Sales_data &rhs)
{
    unitsSold_ += rhs.unitsSold_;
    revenue_ += rhs.revenue_;

    return *this;
}
