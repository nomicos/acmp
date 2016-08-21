#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    if(!(a % b) || !(b % a))
        cout << 1;
    else
        cout << 42;

    return 0;
}
