#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> a;
    a.resize(n);

    int posSum = 0, posCount = 0;
    int negSum = 0, negCount = 0;

    for(int & i : a)
    {
        cin >> i;

        if(i > 0)
        {
            posSum += i;
            ++posCount;
        }
        else if(i < 0)
        {
            negSum -= i;
            ++negCount;
        }
    }

    bool posElements = (posSum > negSum);

    if(posElements)
    {
        cout << posCount << '\n';
        for(int i = 0; i < n; ++i)
            if(a[i] > 0)
                cout << i+1 << ' ';
    }
    else
    {
        cout << negCount << '\n';
        for(int i = 0; i < n; ++i)
            if(a[i] < 0)
                cout << i+1 << ' ';
    }

    return 0;
}
