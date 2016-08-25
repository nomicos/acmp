#include <iostream>
#include <vector>

using namespace std;

struct Graph
{
    vector<vector<int>> matrix;

    Graph(int n)
    {
        matrix.resize(n, vector<int>(n, 0));
        return;
    }

    void addTunnel(int a, int b)
    {
        ++matrix[a][b];
        ++matrix[b][a];
        return;
    }

    void show()
    {
        for(auto row : matrix)
        {
            int counter = 0;
            for(auto elem : row)
                counter += elem;
            cout << counter << ' ';
        }
    }
};

int main()
{
    int n, m;
    cin >> n >> m;

    Graph underground(n);

    for(int i = 0; i < m; ++i)
    {
        int a, b;
        cin >> a >> b;

        underground.addTunnel(a-1,b-1);
    }

    underground.show();

    return 0;
}
