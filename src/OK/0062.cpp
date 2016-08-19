#include <iostream>

using namespace std;

int main()
{
    char c;
    int i;
    cin >> c >> i;

    if((c + i) % 2)
        cout << "WHITE";
    else
        cout << "BLACK";

    return 0;
}
