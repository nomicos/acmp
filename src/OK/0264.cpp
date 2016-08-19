#include <iostream>

using namespace std;

int main()
{
    int longestStreak = 0;
    int currentStreak = 0;

    int n;
    cin >> n;

    for(int i = 0; i < n; ++i)
    {
        int t;
        cin >> t;

        if(t > 0)
        {
            ++currentStreak;
            if(currentStreak > longestStreak)
            {
                longestStreak = currentStreak;
            }
        }
        else
        {
            currentStreak = 0;
        }
    }

    cout << longestStreak;

    return 0;
}
