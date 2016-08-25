#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = 1;
    while(i*i <= n)
    {
        cout << i*i << ' ';
        ++i;
    }

    return 0;
}
