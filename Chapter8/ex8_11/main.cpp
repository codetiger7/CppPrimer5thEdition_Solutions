/// Exercise 8.11: The program in this section defined its istringstream object inside the outer while loop.
/// What changes would you need to make if record were defined outside that loop?
/// Rewrite the program, moving the definition of record outside the while,
/// and see whether you thought of all the changes that are needed.

#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;


// members are public by default; see § 7.2 (p. 268)
struct PersonInfo
{
    string name;
    vector<string> phones;
};


int main()
{
    string line, word;                  // will hold a line and word from input, respectively
    vector<PersonInfo> people;          // will hold all the records from the input
    istringstream record(line);         // bind record to the line we just read

    while (getline(cin, line))
    {
        PersonInfo info;                    // create an object to hold this record's data
        record >> info.name;                // read the name
        cout << info.name;

        while (record >> word)              // read the phone numbers
        {
            info.phones.push_back(word);    // and store them
        }

        people.push_back(info);             // append this record to people
        record.clear();
        record.str(string());
    }


    cout << "start print:" << endl;


//    cout << people[0].name << endl;


//    for (auto& p : people)
//    {
//        cout << "name: " << p.name << endl;

//        for ( auto& n : p.phones)
//        {
//            cout << "number: " << n;
//        }
//        cout << endl;
//    }
}
