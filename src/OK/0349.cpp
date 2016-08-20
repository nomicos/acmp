#include <iostream>
#include <string>
#include <cmath>

using namespace std;

bool isPrime(int n)
{
    if(n == 2)
        return true;
    else if(n % 2 == 0)
        return false;
    else
        for(int i = 3; i <= sqrt(n); i += 2)
            if(n % i == 0)
                return false;
    return true;
}

int main()
{
    int m, n;
    cin >> m >> n;

    string s("");

    for(int i = m; i <= n; ++i)
        if(isPrime(i))
            s += to_string(i) + '\n';

    if(!s.empty())
        cout << s;
    else
        cout << "Absent";

    return 0;
}
