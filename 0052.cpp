#include <iostream>

using namespace std;

inline int getDigitSum(int n)
{
    int sum = 0;
    while(n)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main()
{
    int n;
    cin >> n;

    int lhs = n / 1000;
    int rhs = n % 1000;

    if(getDigitSum(lhs) == getDigitSum(rhs))
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
