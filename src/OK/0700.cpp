#include <iostream>

using namespace std;

int main()
{
    int n, k;
    long long v;
    cin >> n >> v >> k;

    auto total = v;
    bool isEmpty = false;

    for(int i = 1; (i < n) && (!isEmpty); ++i)
    {
        int currentDonation = v - k * i;

        if(currentDonation > 0)
        {
            total += currentDonation;
        }
        else
        {
            isEmpty = true;
        }
    }

    cout << (isEmpty ? "NO" : "YES") << ' ' << total;

    return 0;
}
