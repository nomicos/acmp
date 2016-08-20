#include <iostream>

using namespace std;

int main()
{
    int k;
    cin >> k;

    const int operationalTime = (20 - 8) * 60;
    int waiting = 5 * (k-1);

    if(waiting <= operationalTime)
        cout << waiting / 60 << ' ' << waiting % 60;
    else
        cout << "NO";

    return 0;
}
