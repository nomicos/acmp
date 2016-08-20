#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
    int n, i, j;
    cin >> n >> i >> j;

    int path1 = abs(j - i) - 1;
    int path2 = i + n - j - 1;
    int path3 = j + n - i - 1;

    int res = min(path1, min(path2, path3));

    cout << res;

    return 0;
}
