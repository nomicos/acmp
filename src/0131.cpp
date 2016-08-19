#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int maxAge = 0;
    int maxPos = -1;
    for(int i = 0; i < n; ++i)
    {
        int v, s;
        cin >> v >> s;

        if(s == 1 && v > maxAge)
        {
            maxAge = v;
            maxPos = i + 1;
        }
    }

    cout << maxPos;

    return 0;
}
