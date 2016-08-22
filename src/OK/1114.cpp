#include <iostream>

using namespace std;

int main()
{
    const int length = 109;

    int v, t;
    cin >> v >> t;

    int mod = (v * t) % length;

    if(v > 0)
        cout << (mod + 1) % (length+1);
    else if(v < 0)
        cout << (length + mod + 1) % (length+1);

    return 0;
}
