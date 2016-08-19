#include <iostream>

using namespace std;

int main()
{
    int aTotal = 0;
    int bTotal = 0;

    for(int i = 0; i < 4; ++i)
    {
        int a, b;
        cin >> a >> b;
        aTotal += a;
        bTotal += b;
    }

    if(aTotal > bTotal)
        cout << 1;
    else if(aTotal < bTotal)
        cout << 2;
    else
        cout << "DRAW";

    return 0;
}
