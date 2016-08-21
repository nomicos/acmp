#include <iostream>

using namespace std;

int main()
{
    int min =  10000 + 1;
    int max = -10000 - 1;

    int t;
    for(int i = 1; cin >> t; ++i)
    {
        if((i % 2) && (t < min))
            min = t;
        else if(!(i % 2) && (t > max))
            max = t;
    }

    cout << max + min;

    return 0;
}
