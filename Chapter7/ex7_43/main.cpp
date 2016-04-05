#include <iostream>
#include <vector>


class NoDefault
{
public:
    NoDefault(int a) {}

};

class C
{
public:
    C()
        : noDef(0)
    {}

    NoDefault noDef;
};




using namespace std;

int main()
{
    C s;
    std::vector<C> no(10);

    cout << "Hello World!" << endl;
    return 0;
}

