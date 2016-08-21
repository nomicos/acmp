#include <iostream>
#include <vector>

using namespace std;

bool isCompatible(int digit, char color)
{
    if(color == '.')
        return true;

    short colorBit = 1;

    if(color == 'R')
        colorBit <<= 2;
    else if(color == 'G')
        colorBit <<= 1;
    // B does not require shift as it is '001'.

    if(!!(colorBit & digit))
        return true;

    return false;
}

int main()
{
    int n, m;
    cin >> n >> m;

    vector<vector<char>> picture;
    vector<vector<int>> screen;
    picture.reserve(n);
    screen.reserve(n);

    for(int i = 0; i < n; ++i)
    {
        picture[i].reserve(m);
        for(int j = 0; j < m; ++j)
        {
            cin >> picture[i][j];
        }
    }

    bool result = true;

    for(int i = 0; i < n; ++i)
    {
        screen[i].reserve(m);
        for(int j = 0; j < m; ++j)
        {
            cin >> screen[i][j];
        }
    }

    for(int i = 0; (i < n) && result; ++i)
    {
        for(int j = 0; (j < m) && result; ++j)
        {
            if(!isCompatible(screen[i][j], picture[i][j]))
            {
                result = false;
            }
        }
    }

    if(result)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
