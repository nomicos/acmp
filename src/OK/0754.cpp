#include <iostream>

using namespace std;

int main()
{
    const int minLimit =  94;
    const int maxLimit = 727;

    int t, max = minLimit;
    bool isCorrect = true;
    for(int i = 0; i < 3 && isCorrect; ++i)
    {
        cin >> t;
        if(t < minLimit || t > maxLimit)
        {
            isCorrect = false;
        }
        else
        {
            if(t > max)
                max = t;
        }
    }

    if(isCorrect)
        cout << max;
    else
        cout << "Error";

    return 0;
}
