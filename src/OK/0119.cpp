#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> t(n);
    for(int &i : t)
    {
        int h, m, s;
        cin >> h >> m >> s;
        i = h * 60 * 60 + m * 60 + s;
    }

    sort(t.begin(), t.end());

    for(int i : t)
    {
        int h = i / (60*60);
        int m = i / 60 - h*60;
        int s = i - h*60*60 - m*60;

        cout << h << ' ' << m << ' ' << s << '\n';
    }

    return 0;
}
