#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    int dx = x1 - x2;
    int dy = y1 - y2;

    double dist = sqrt(static_cast<double>(dx*dx + dy*dy));
    cout << fixed;
    cout << setprecision(5) << dist;

    return 0;
}
