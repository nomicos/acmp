#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
#include <limits>

using namespace std;

int main()
{
    const string allowable = "ABCEHKMOPTXY";

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for(int i = 0; i < n; ++i)
    {
        string t;
        getline(cin, t);

        bool isCorrect =    allowable.find(t[0]) != string::npos
                         && isdigit(t[1])
                         && isdigit(t[2])
                         && isdigit(t[3])
                         && allowable.find(t[4]) != string::npos
                         && allowable.find(t[5]) != string::npos;

        cout << (isCorrect ? "Yes" : "No") << '\n';
    }

    return 0;
}
