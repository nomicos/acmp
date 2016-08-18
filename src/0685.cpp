#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

int main()
{
    array<int, 3> a;
    array<int, 3> b;

    for(int i = 0; i < 3; ++i)
        cin >> a[i];
    for(int i = 0; i < 3; ++i)
        cin >> b[i];

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int sum = 0;
    for(int i = 0; i < 3; ++i)
        sum += a[i] * b[i];

    cout << sum;

    return 0;
}
