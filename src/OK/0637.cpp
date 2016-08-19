#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for(int &i : a)
        cin >> i;

    int k;
    cin >> k;

    int res = 0;
    for(int i : a)
        res += min(i, k);

    cout << res;

    return 0;
}
