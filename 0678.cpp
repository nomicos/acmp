#include <iostream>

using namespace std;

int main()
{
    int p = 1;
    char c;
    while(cin >> c)
    {
        switch(c)
        {
        case 'A':
            if(p == 1)
                p = 2;
            else if(p == 2)
                p = 1;
            break;
        case 'B':
            if(p == 2)
                p = 3;
            else if(p == 3)
                p = 2;
            break;
        case 'C':
            if(p == 1)
                p = 3;
            else if(p == 3)
                p = 1;
            break;
        }
    }

    cout << p;

    return 0;
}
