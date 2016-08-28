#include <iostream>

using namespace std;

int main()
{
    bool lo(false), up(false), dig(false);
    int length = 0;
    char t;

    while(cin >> t)
    {
        ++length;

        if(t >= 'a' && t <= 'z')
            lo = true;
        else if(t >= 'A' && t <= 'Z')
            up = true;
        else if(t >= '0' && t <= '9')
            dig = true;
    }

    cout << (lo && up && dig ? "Yes" : "No");

    return 0;
}
