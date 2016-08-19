#include <iostream>
#include <string>
#include <algorithm>
#include <limits>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int res = m;
    for(int i = 0; i < n; ++i)
    {
        string s;
        getline(cin, s);
        int dotCount = count(s.cbegin(), s.cend(), '.');
        if(dotCount < res)
            res = dotCount;
    }

    cout << res;

    return 0;
}
