#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int sideZero = 0;
    int sideOne = 0;

    for(int i = 0; i < n; ++i)
    {
        int t;
        cin >> t;
        if(t)
            ++sideOne;
        else
            ++sideZero;
    }

    cout << (sideZero < sideOne ? sideZero : sideOne);

    return 0;
}
