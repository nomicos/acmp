#include <iostream>

using namespace std;

bool isLetter(char n)
{
    if(  n >= 'a' && n <= 'z'
      || n >= 'A' && n <= 'Z')
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

        counter += isLetter(t);
    }

    cout << counter;

    return 0;
}
