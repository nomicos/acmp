#include <iostream>

using namespace std;

int main()
{
    int r1, r2, r3;
    cin >> r1 >> r2 >> r3;

    if(r1 >= r2 + r3)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
