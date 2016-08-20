#include <iostream>
#include <vector>

using namespace std;

int main()
{
    long long a, b, c, d;
    cin >> a >> b >> c >> d;

    for(int i = -100; i <= 100; ++i)
    {
        if(a*i*i*i + b*i*i + c*i + d == 0)
        {
            cout << i << ' ';
        }
    }

    return 0;
}
