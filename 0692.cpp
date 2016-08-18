#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    if(n < 1)
    {
        cout << "NO";
    }
    else
    {
        bool isBinary = true;
        while(n > 1)
        {
            if(n % 2)
            {
                isBinary = false;
                break;
            }
            n /= 2;
        }
        cout << (isBinary ? "YES" : "NO");
    }

    return 0;
}
