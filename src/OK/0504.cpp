#include <iostream>

using namespace std;

int main()
{
    int k;
    cin >> k;

    switch(k % 3)
    {
    case 0:
        cout << "GCV";
        break;
    case 1:
        cout << "VGC";
        break;
    case 2:
        cout << "CVG";
        break;
    }

    return 0;
}
