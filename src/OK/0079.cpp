#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int init = a;

    for(int i = 1; i < b; ++i)
    {
        a = (a % 10) * init;
    }

    cout << a % 10;

    return 0;
}
