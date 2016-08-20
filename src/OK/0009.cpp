#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int positiveSum = 0;
    int maxValue = -101, maxPos = 0;
    int minValue =  101, minPos = 0;

    vector<int> v(n);
    for(int i = 0; i < n; ++i)
    {
        cin >> v[i];

        if(v[i] > 0)
            positiveSum += v[i];

        if(v[i] < minValue)
        {
            minValue = v[i];
            minPos = i;
        }
        if(v[i] > maxValue)
        {
            maxValue = v[i];
            maxPos = i;
        }
    }

    int product = 0;
    int a = min(minPos, maxPos) + 1;
    int b = max(minPos, maxPos);
    if(a != b)
    {
        product = 1;
        for(int i = a; i < b; ++i)
            product *= v[i];
    }

    cout << positiveSum << ' ' << product;

    return 0;
}
