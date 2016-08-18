#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int y;
    cin >> y;

    bool isLeap = (y % 400 == 0) || (y % 100 && y % 4 == 0);

    if(isLeap)
        cout << "12/09/";
    else
        cout << "13/09/";

    cout << setw(4) << setfill('0') << y;

    return 0;
}
