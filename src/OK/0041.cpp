#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<int, int> temp;

    int n;
    cin >> n;

    for(int i = 0; i < n; ++i)
    {
        int t;
        cin >> t;

        ++temp[t];
    }

    for(const auto &t : temp)
        for(int i = 0; i < t.second; ++i)
            cout << t.first << ' ';

    return 0;
}
