#include <iostream>
#include <string>

using namespace std;

int main()
{
    string n;
    getline(cin, n);

    cout << 1;
    for(int i = n.size()-1; i > 0 && n[i] == '0'; --i, cout << 0);

    return 0;
}
