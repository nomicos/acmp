#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> c;
    c.resize(n);

    for(int & i : c)
        cin >> i;

    int k;
    cin >> k;

    for(int i = 0; i < k; ++i)
    {
        int t;
        cin >> t;

        --c[t-1];
    }

    for(int i : c)
    {
        if(i < 0)
            cout << "yes\n";
        else
            cout << "no\n";
    }

    return 0;
}
