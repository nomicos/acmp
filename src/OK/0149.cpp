#include <iostream>

using namespace std;

void recursiveIO(int depth)
{
    if(depth == 0)
        return;

    int a;
    cin >> a;
    recursiveIO(depth-1);
    cout << a << ' ';
    return;
}

int main()
{
    int n;
    cin >> n;

    recursiveIO(n);

    return 0;
}
