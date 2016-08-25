#include <iostream>

using namespace std;

int main()
{
    int counter = 0;
    char t;

    while(cin >> t)
    {
        if(t == '0')
            ++counter;
    }

    cout << counter;

    return 0;
}
