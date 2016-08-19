#include <iostream>
#include <string>

using namespace std;

int main()
{
    const string kb = "qwertyuiopasdfghjklzxcvbnmq";

    char k;
    cin >> k;
    cout << kb[kb.find(k) + 1];

    return 0;
}
