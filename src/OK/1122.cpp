#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    if(abs(x1 - x2) <= 1 && abs(y1 - y2) <= 1)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
