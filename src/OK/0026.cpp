#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int ax, ay, ar, bx, by, br;
    cin >> ax >> ay >> ar >> bx >> by >> br;

    int dx = ax - bx;
    int dy = ay - by;
    int dist = sqrt(dx*dx + dy*dy);

    if(ar + br >= dist && dist + ar >= br && dist + br >= ar)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
