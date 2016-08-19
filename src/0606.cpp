#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int longest = max(a, max(b, c));
    int rest = a + b + c - longest;

    if(rest > longest)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
