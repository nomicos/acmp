#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> b(n);
    for(int &i : b)
        cin >> i;

    int res = b[n-1] + b[0] + b[1];
    for(int i = 1; i < n; ++i)
    {
        int current = b[i-1] + b[i] + b[(i+1) % n];
        if(current > res)
            res = current;
    }

    cout << res;

    return 0;
}
