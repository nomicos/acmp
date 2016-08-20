#include <iostream>
#include <vector>

using namespace std;

bool canBePlacedHere(const vector<vector<char>> &f, int i, int j)
{
    if(f[i-1][j] == '*' || f[i+1][j] == '*')
        return false;
    if(f[i][j-1] == '*' || f[i][j+1] == '*')
        return false;

    return true;
}

int main()
{
    int n, m;
    cin >> n >> m;

    vector<vector<char>> f;
    f.resize(n+2);

    // Filling top and bottom borders.
    for(int j = 0; j < m+2; ++j)
    {
        f[0].push_back('.');
        f[n+1].push_back('.');
    }

    for(int i = 1; i < n+1; ++i)
    {
        f[i].resize(m+2, '.');
        for(int j = 1; j < m+1; ++j)
        {
            cin >> f[i][j];
        }
    }

    int res = 0;
    for(int i = 1; i < n+1; ++i)
    {
        for(int j = 1; j < m+1; ++j)
        {
            if(f[i][j] == '.')
                res += canBePlacedHere(f, i, j);
        }
    }

    cout << res;

    return 0;
}
