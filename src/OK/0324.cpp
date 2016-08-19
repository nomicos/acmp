#include <iostream>
#include <string>

using namespace std;

int main()
{
    string n;
    getline(cin, n);

    if(n[0] == n[3] && n[1] == n[2])
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
