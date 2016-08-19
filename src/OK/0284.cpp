#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for(int &i : v)
        cin >> i;

    int m;
    cin >> m;

    for(int i = 0; i < m; ++i)
    {
        int a, b;
        cin >> a >> b;
        for(int j = a-1; j < b; ++j)
            cout << v[j] << ' ';
        cout << '\n';
    }

    return 0;
}
