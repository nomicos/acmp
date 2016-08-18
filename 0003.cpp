#include <iostream>

using namespace std;

int main()
{
    int a;
    cin >> a;

    int tens = a / 10;
    tens *= tens + 1;
    if(tens)
        cout << tens << 25;
    else
        cout << 25;

    return 0;
}
