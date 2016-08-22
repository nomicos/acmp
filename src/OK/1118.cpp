#include <iostream>

using namespace std;

int main()
{
    int h, a, b;
    cin >> h >> a >> b;

    int days = 0;
    int currentHeight = 0;

    // Naive algorithm.
    while(true)
    {
        ++days;
        currentHeight += a;
        if(currentHeight >= h)
            break;
        currentHeight -= b;
    }

    cout << days;

    return 0;
}
