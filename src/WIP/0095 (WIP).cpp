#include <iostream>
#include <string>

using namespace std;

int evaluate(int sum, int &operations)
{
    ++operations;

    if(sum < 10)
        return sum;

    int newSum = 0;
    while(sum && (newSum += sum % 10) && (sum /= 10));

    return evaluate(newSum, operations);
}

int main()
{
    string n;
    getline(cin, n);

    int sum = 0;
    int operations = 0;

    for(int i = 0; i < n.size(); ++i)
        sum += (static_cast<int>(n[i]-'0'));

    if(sum > 9)
        cout << evaluate(sum, operations);
    else
        cout << sum;

    cout << ' ' << operations;

    return 0;
}
