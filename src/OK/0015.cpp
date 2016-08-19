#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int counter = 0;
    for(int i = 0; i < n*n; ++i)
    {
        int t;
        cin >> t;

        if(t)
            ++counter;
    }

    cout << counter / 2;

    return 0;
}
