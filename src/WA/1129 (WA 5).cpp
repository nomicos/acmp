#include <iostream>

using namespace std;

int main()
{
    int deposit, rate, goal;
    cin >> deposit >> rate >> goal;

    int years = 0;
    while(deposit < goal)
    {
        deposit += deposit / 100.0 * rate;
        ++years;
    }

    cout << years;

    return 0;
}
