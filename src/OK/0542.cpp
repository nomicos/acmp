#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<bool> a;
    a.reserve(32);

    int m;
    cin >> m;

    while(m)
    {
        a.push_back(m % 2);
        m /= 2;
    }

    int res = 0;
    for(int i : a)
    {
        res += i;
        res *= 2;
    }

    cout << res / 2;

    return 0;
}
