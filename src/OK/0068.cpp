#include <iostream>

using namespace std;

int main()
{
    string loc;
    int x;

    cin >> loc >> x;

    if(loc == "Home")
        cout << "Yes";
    else if(x % 2)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}
