#include <iostream>

using namespace std;

int main()
{
    int s, p;
    cin >> s >> p;

    for(int i = 1; i <= s/2; ++i)
    {
        if(i * (s-i) == p)
        {
            cout << i << ' ' << s-i;
            break;
        }
    }

    return 0;
}
