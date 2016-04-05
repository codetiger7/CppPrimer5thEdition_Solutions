#include <iostream>
#include <string>
using namespace std;



int height;

class Screen
{
public:
    void setHeight(pos);
    pos height = 0;
    typedef std::string::size_type pos;
};


Screen::pos verify(Screen::pos);

void Screen::setHeight(pos var)
{
    height = verify(var);
}

Screen::pos verify(Screen::pos)
{
    return true;
}


int main()
{
    cout << "Hello World!" << endl;
    return 0;
}

