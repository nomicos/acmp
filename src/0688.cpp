#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

struct Point
{
    int x;
    int y;
};

double dist(const Point &a, const Point &b)
{
    int dx = a.x - b.x;
    int dy = a.y - b.y;

    return sqrt(static_cast<double>(dx*dx + dy*dy));
}

int main()
{
    Point g, d;
    cin >> g.x >> g.y;
    cin >> d.x >> d.y;

    int n;
    cin >> n;

    bool canEscape = false;
    for(int i = 0; i < n; ++i)
    {
        Point h;
        cin >> h.x >> h.y;

        auto gopherRate = dist(g, h);
        auto dogRate = dist(d, h) / 2;

        if(gopherRate <= dogRate)
        {
            cout << i + 1;
            canEscape = true;
            break;
        }
    }

    if(!canEscape)
        cout << "NO";

    return 0;
}
