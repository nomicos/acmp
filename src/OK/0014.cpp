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

int main()
{
    int a, b;
    cin >> a >> b;
    cout << lcm(a,b);

    return 0;
}
