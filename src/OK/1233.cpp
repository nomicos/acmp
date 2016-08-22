#include <iostream>
#include <vector>
#include <utility>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<vector<int>> a;
    a.resize(n);

    for(auto & row : a)
    {
        row.resize(n);
        for(auto & elem : row)
        {
            cin >> elem;
        }
    }

    for(int i = 0; i < n-1; ++i)
    {
        for(int j = i+1; j < n; ++j)
        {
            swap(a[i][j], a[j][i]);
        }
    }

    for(auto row : a)
    {
        for(auto elem : row)
        {
            cout << elem << ' ';
        }
        cout << '\n';
    }
    return 0;
}
