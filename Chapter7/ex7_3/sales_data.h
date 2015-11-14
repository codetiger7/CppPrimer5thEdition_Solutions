#ifndef SALES_DATA
#define SALES_DATA

#include <string>

class Sales_data
{
public:

    std::string isbn() const { return bookNo_; }
    Sales_data& combine(const Sales_data& rhs);


private:
    std::string bookNo_;
    unsigned unitsSold_ = 0;
    double revenue_ = 0.0;
};

#endif // SALES_DATA

