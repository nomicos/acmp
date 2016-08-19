#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string s[4];
    for(int i = 0; i < 4; ++i)
        getline(cin, s[i]);

    sort(s+1, s+4);

    cout << s[0] << ": " << s[1] << ", " << s[2] << ", " << s[3];

    return 0;
}
