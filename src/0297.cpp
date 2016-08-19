#include <iostream>
#include <string>

using namespace std;

int main()
{
    string n;
    getline(cin, n);

    int counter = 0;

    for(const char& c : n)
    {
        switch(c)
        {
        case '8':
            ++counter;
        case '0':
        case '6':
        case '9':
            ++counter;
            break;
        }
    }

    cout << counter;

    return 0;
}
