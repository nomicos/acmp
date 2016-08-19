#include <iostream>

using namespace std;

inline int getBinaryDigitSum(int n)
{
    int res = 0;
    while(n)
    {
        res += n % 2;
        n /= 2;
    }
    return res;
}

int main()
{
    int n;
    cin >> n;

    cout << n + getBinaryDigitSum(n);

    return 0;
}
