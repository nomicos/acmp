#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<vector<int>> a(n, vector<int>(m));
    vector<int> rowSums(n, 0), colSums(m, 0);

    for(auto & row : a)
        for(auto & elem : row)
            cin >> elem;

    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < m; ++j)
        {
            rowSums[i] += a[i][j];
            colSums[j] += a[i][j];
        }
    }

    for(auto i : rowSums)
        cout << i << ' ';
    cout << '\n';

    for(auto i : colSums)
        cout << i << ' ';
    cout << "\n\n";

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
