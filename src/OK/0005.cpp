#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> odd;   // Mark 3.
    vector<int> even;  // Mark 4.

    odd.reserve(100);
    even.reserve(100);

    int n;
    cin >> n;

    for(int i = 0; i < n; ++i)
    {
        int t;
        cin >> t;
        auto &v = (t % 2 ? odd : even);
        v.push_back(t);
    }

    for(int i : odd)
        cout << i << ' ';
    cout << '\n';

    for(int i : even)
        cout << i << ' ';
    cout << '\n';

    if(odd.size() <= even.size())
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
