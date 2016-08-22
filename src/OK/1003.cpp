#include <iostream>

using namespace std;

int main()
{
    const int pencil = 3;
    const int pen = pencil + 2;
    const int marker = pen + 7;

    long long x, y, z;
    cin >> x >> y >> z;

    cout << x * pencil + y * pen + z * marker;

    return 0;
}
