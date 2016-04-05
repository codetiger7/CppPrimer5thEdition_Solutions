#include <iostream>
#include <vector>
#include <string>
#include <list>
using namespace std;


int main()
{
    vector<string> svec;


    list<string> slist;
    svec.insert(svec.end(), 10, "Anna");


    vector<string> v { "quasi", "simba", "frollo", "scar" };

    // insert the last two elements of v at the beginning of slist
    slist.insert(slist.begin(), v.end() - 2, v.end());
    slist.insert(slist.end(), {"these", "words", "will", "go", "at", "the", "end"});
//    slist.insert(slist.begin(), slist.begin(), slist.end());

    list<string> lst;
    auto iter = lst.begin();
    string word;
    while (cin >> word)
    {
        iter = lst.insert(iter, word);
    }

    for (const auto& b : slist)
    {
        cout << b << endl;
    }


    return 0;
}

