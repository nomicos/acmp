#include <iostream>

using namespace std;

// GCD - greatest common divisor.
int gcd(int a, int b)
{
    while(b)
        b ^= a ^= b ^= a %= b;
    return a;
}

// LCM - least common multiple.
int lcm(int a, int b)
{
    return (a*b) / gcd(a,b);
}

int lcm(int a, int b, int c)
{
    return lcm(a, lcm(b,c));
}

int main()
{
    int k, n, m, d;
    cin >> k >> n >> m >> d;

    cout << lcm(lcm(k, n, m), d);

    return 0;
}
