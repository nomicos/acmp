#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

int eval(int n)
{
    array<int, 4> digits;
    for(int i = 0; i < 4; ++i)
    {
        digits[i] = n % 10;
        n /= 10;
    }
    sort(digits.begin(), digits.end());

    int asc = 0;
    int desc = 0;
    for(int i = 0; i < 4; ++i)
    {
        asc *= 10;
        asc += digits[i];

        desc *= 10;
        desc += digits[4-1-i];
    }

    return (desc - asc);
}

int main()
{
    const int kaprekar = 6174;

    int n, counter = 0;
    cin >> n;

    while(n != kaprekar)
    {
        n = eval(n);
        ++counter;
    }

    cout << kaprekar << '\n' << counter;

    return 0;
}
