#include <iostream>
#include <string>

using namespace std;

int main()
{
    const string frac = "7182818284590452353602875";

    int n;
    cin >> n;

    if(n == 0)
    {
        cout << 3;
    }
    else
    {
        cout << "2.";
        if(n == 25)
        {
            cout << frac;
        }
        else
        {
            for(int i = 0; i < n-1; ++i)
                cout << frac[i];
            if(frac[n] < '5')
                cout << frac[n-1];
            else
                cout << static_cast<char>(frac[n-1] + 1);
        }

    }

    return 0;
}
