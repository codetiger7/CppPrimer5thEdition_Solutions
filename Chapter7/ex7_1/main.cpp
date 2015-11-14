// Exercise 7.1

#include <iostream>
#include <string>
using namespace std;

struct Sales_data
{
    string bookNo_;
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


int main()
{
    Sales_data total;

    if (cin >> total.bookNo_ >> total.unitsSold_ >> total.revenue_)
    {
        Sales_data trans_;

        while (cin >> trans_.bookNo_ >> trans_.unitsSold_ >> trans_.revenue_)
        {
            if (total.bookNo_ == trans_.bookNo_)
            {
                priceIsRight(total, trans_);

            }
            else
            {
                cout << "ISBN Number: " << total.bookNo_ << endl;
                cout << "Total units: " <<  total.unitsSold_ << endl;
                cout << "Total revenue: " << total.revenue_ * total.unitsSold_ << endl;
                total = trans_;
            }
        }

        cout << total.bookNo_ << endl;
        cout << total.unitsSold_ << endl;
        cout << total.revenue_ * total.unitsSold_ << endl;
            }
    else
    {
        cerr << "No data?!" << endl;
        return -1;
    }

    return 0;

}

