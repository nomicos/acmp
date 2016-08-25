#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int res = n, t = n;
    while(t > 1)
    {
        if(n % t == 0)
            res = t;
        --t;
    }

    cout << res;

    return 0;
}
