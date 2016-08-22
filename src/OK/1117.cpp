#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int res = 9 * 60;
    for(int i = 1; i <= n; ++i)
    {
        res += 45;

        if(i != n && i % 2)
            res += 5;
        else if(i != n && !(i % 2))
            res += 15;
    }

    cout << res / 60 << ' ' << res % 60;

    return 0;
}
