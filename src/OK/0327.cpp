#include <iostream>

using namespace std;

int digitSum(int n)
{
    int sum = 0;
    while(n)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

bool isLucky(int n)
{
    int lhs = n / 1000;
    int rhs = n % 1000;

    return (digitSum(lhs) == digitSum(rhs));
}

int main()
{
    int k;
    cin >> k;

    for(int i = 0; i < k; ++i)
    {
        int t;
        cin >> t;

        if(isLucky(t-1) || isLucky(t+1))
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
}
