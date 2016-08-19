#include <iostream>
#include <string>
#include <limits>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int counter = 0;
    for(int i = 0; i < n; ++i)
    {
        string s;
        getline(cin, s);

        if(s[0] == s[3])
            ++counter;
    }

    cout << counter;

    return 0;
}
