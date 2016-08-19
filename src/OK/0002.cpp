#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int counter = 0;

    if(n <= 0)
        for(int i = 1; i >= n; --i)
            counter += i;
    else
        for(int i = 1; i <= n; ++i)
            counter += i;

    cout << counter;

    return 0;
}
