#include <iostream>

using namespace std;

int main()
{
    // Indices used are [1,31]; 0 is unused.
    int days[32] { };

    int n;
    cin >> n;

    for(int i = 0; i < n; ++i)
    {
        int a, b;
        cin >> a >> b;

        for(int j = a; j <= b; ++j)
            ++days[j];
    }

    bool isPossible = false;
    for(int i = 1; i <= 31; ++i)
    {
        if(days[i] == n)
        {
            isPossible = true;
            break;
        }
    }

    cout << (isPossible ? "YES" : "NO");

    return 0;
}
