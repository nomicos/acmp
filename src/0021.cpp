#include <iostream>

using namespace std;

int main()
{
    int min = 100000 + 1;
    int max = 0;

    for(int i = 0; i < 3; ++i)
    {
        int t;
        cin >> t;

        if(t < min)
            min = t;
        if(t > max)
            max = t;
    }

    cout << max - min;

    return 0;
}
