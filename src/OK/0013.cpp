#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    const int ib = b;

    int bulls(0), cows(0);

    while(a)
    {
        if(a % 10 == b % 10)
        {
            ++bulls;
        }
        else
        {
            int t = ib;
            while(t)
            {
                if(a % 10 == t % 10)
                {
                    ++cows;
                    break;
                }
                t /= 10;
            }
        }

        a /= 10;
        b /= 10;
    }

    cout << bulls << ' ' << cows;

    return 0;
}
