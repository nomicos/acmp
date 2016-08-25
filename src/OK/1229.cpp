#include <iostream>

using namespace std;

struct Point { int x, y; };

int sideSq(const Point & a, const Point & b)
{
    int dx = a.x - b.x;
    int dy = a.y - b.y;
    return (dx*dx + dy*dy);
}

int main()
{
    Point p[3];
    for(int i = 0; i < 3; ++i)
        cin >> p[i].x >> p[i].y;

    int aSq = sideSq(p[0], p[1]);
    int bSq = sideSq(p[1], p[2]);
    int cSq = sideSq(p[0], p[2]);

    if(aSq + bSq == cSq || aSq + cSq == bSq || bSq + cSq == aSq)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}
