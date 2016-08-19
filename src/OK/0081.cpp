#include <iostream>

using namespace std;

int main()
{
    int min = 30000 + 1;
    int max = 0;

    int n;
    cin >> n;

    for(int i = 0; i < n; ++i)
    {
        int t;
        cin >> t;

        if(t < min)
            min = t;
        if(t > max)
            max = t;
    }

    cout << min << ' ' << max;

    return 0;
}
