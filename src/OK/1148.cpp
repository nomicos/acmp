#include <iostream>

using namespace std;

int main()
{
    char c;
    cin >> c;

    if(c >= 'a' && c <= 'z')
        cout << static_cast<char>(c - 'a' + 'A');
    else if(c >= 'A' && c <= 'Z')
        cout << static_cast<char>(c - 'A' + 'a');
    else
        cout << c;

    return 0;
}
