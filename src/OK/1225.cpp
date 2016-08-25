#include <iostream>

using namespace std;

bool isDigit(char n)
{
    if(n >= '0' && n <= '9')
        return true;
    return false;
}

int main()
{
    int counter = 0;
    for(int i = 0; i < 3; ++i)
    {
        char t;
        cin >> t;

        counter += isDigit(t);
    }

    cout << counter;

    return 0;
}
