#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int t = 1;
    while(t <= n)
    {
        cout << t << ' ';
        t *= 2;
    }

    return 0;
}
