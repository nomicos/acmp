#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    bool isFound = false;
    int a = 1, b = 1, c = -1;
    for(int i = 3; c <= n; ++i)
    {
        c = a + b;
        if(c == n)
        {
            cout << 1 << '\n' << i;
            isFound = true;
            break;
        }
        a = b;
        b = c;
    }

    if(!isFound)
        cout << 0;

    return 0;
}
