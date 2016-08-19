#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int counter = 0;
    while(n)
    {
        counter += n % 2;
        n /= 2;
    }

    cout << counter;

    return 0;
}
