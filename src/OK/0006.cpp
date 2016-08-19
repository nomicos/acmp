#include <iostream>
#include <string>
#include <cmath>

using namespace std;

bool dgtOK(char c)
{
    return (c >= '1' && c <= '8');
}

bool ltrOK(char c)
{
    return (c >= 'A' && c <= 'H');
}

int main()
{
    string s(5, ' ');
    getline(cin, s);

    bool strOK =    s[2] == '-'
                 && ltrOK(s[0]) && ltrOK(s[3])
                 && dgtOK(s[1]) && dgtOK(s[4]);

    if(strOK)
    {
        int ltrDiff = abs(s[0] - s[3]);
        int dgtDiff = abs(s[1] - s[4]);

        if(ltrDiff == 1 && dgtDiff == 2)
            cout << "YES";
        else if(ltrDiff == 2 && dgtDiff == 1)
            cout << "YES";
        else
            cout << "NO";
    }
    else
    {
        cout << "ERROR";
    }

    return 0;
}
