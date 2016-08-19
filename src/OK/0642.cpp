#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, s;
    cin >> n >> s;

    vector<int> a(n);
    for(int &i : a)
        cin >> i;

    sort(a.begin(), a.end());

    int counter = 0;
    for(int i : a)
    {
        if(s-i >= 0)
        {
            ++counter;
            s -= i;
        }
        else
        {
            break;
        }
    }

    cout << counter;

    return 0;
}
