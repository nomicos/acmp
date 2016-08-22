#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double a, b, c;
    cin >> a >> b >> c;

    int d = b*b - 4*a*c;

    if(a == 0)
    {
        cout << "1\n" << fixed;
        cout << setprecision(6) << -c / b;
    }
    else if(d < 0)
    {
        cout << -1;
    }
    else if(d == 0)
    {
        cout << "1\n" << fixed;
        cout << setprecision(6) << -b / (2 * a);
    }
    else
    {
        cout << "2\n" << fixed;
        cout << setprecision(6) << (-b - sqrt(d)) / (2 * a)
             << '\n' << (-b + sqrt(d)) / (2 * a);
    }

    return 0;
}
