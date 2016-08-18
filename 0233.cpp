#include <iostream>

using namespace std;

int main()
{
    const int h = 437;

    int n;
    cin >> n;

    bool isCrashed = false;
    for(int i = 0; i < n; ++i)
    {
        int t;
        cin >> t;
        if(t <= h)
        {
            cout << "Crash " << i+1;
            isCrashed = true;
            break;
        }
    }

    if(!isCrashed)
        cout << "No crash";

    return 0;
}
