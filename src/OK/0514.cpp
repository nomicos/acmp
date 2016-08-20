#include <iostream>

using namespace std;

int main()
{
    int k;
    cin >> k;

    for(int i = 1; ; ++i)
    {
        if(k - i < 0)
        {
            cout << i - 1;
            break;
        }

        k -= i;
    }

    return 0;
}
