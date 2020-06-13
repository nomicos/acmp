#include <iostream>
#include <vector>
using namespace std;
  
void floyd(vector<vector<int>> &m, int &v) {
    int max_distance = 1e9;
    for(int k = 0; k < v; k++) {
        for(int i = 0; i < v; i++) {
            for(int j = 0; j < v; j++) {
                if (m[i][j] > m[i][k] + m[k][j])
                        m[i][j] = m[i][k] + m[k][j];
            }
        }
    }
}
  
int main() {
    const int INF = 1e9;
    int n, m, from, to, weight;
    cin >> n >> m;
    vector<vector<int>> matrix(n, vector<int>(n, INF));
  
    for (int i = 0; i < m; i++) {
        cin >> from >> to >> weight;
        matrix[--from][--to] = weight;
        matrix[to][from] = weight;
    }
  
    for(int i = 0; i < n; i++)
        matrix[i][i] = 0;
  
    floyd(matrix, n);
  
    int maxValue = INF, index = 1;
  
    for(int i = 0; i < n; i++) {
        int curMaxValue = 0;
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] > curMaxValue)
                curMaxValue = matrix[i][j];
        }
 
        if (curMaxValue < maxValue) {
            maxValue = curMaxValue;
            index = i+1;
        }
    }
    cout << index;
    return 0;
}
