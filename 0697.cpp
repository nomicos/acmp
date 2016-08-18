#include <iostream>

using namespace std;

int main()
{
    int l, w, h;
    cin >> l >> w >> h;

    int area = 2 * (l*h + w*h);
    cout << area / 16 + !!(area % 16);

    return 0;
}
