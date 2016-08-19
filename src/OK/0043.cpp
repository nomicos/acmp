#include <iostream>

using namespace std;

int main()
{
    int longestStreak = 0;
    int currentStreak = 0;

    char c;
    while(cin.get(c))
    {
        if(c == '0')
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
