#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> incomes(n);

    for(int &i : incomes)
    {
        cin >> i;
    }

    int maxTaxValue = 0;
    int maxTaxPos = 1;
    for(int i = 0; i < n; ++i)
    {
        int tax;
        cin >> tax;

        int res = incomes[i] * tax;
        if(res > maxTaxValue)
        {
            maxTaxValue = res;
            maxTaxPos = i+1;
        }
    }

    cout << maxTaxPos;

    return 0;
}
