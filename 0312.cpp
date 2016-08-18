#include <iostream>

using namespace std;

int main()
{
    int a1, a2, n;
    cin >> a1 >> a2 >> n;

    int d = a2 - a1;
    cout << a1 + d * (n-1);

    return 0;
}
