#include <bits/stdc++.h>
using namespace std;

int diffDiago(vector<vector<int>> &mat, int cols, int rows)
{
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < rows; i++)
    {
        sum1 += mat[i][i];
        sum2 += mat[i][cols - i - 1];
    }
    return abs(sum1 - sum2);
}

int main()
{
    int m, n;
    cin >> m >> n;
    vector<vector<int>> mat(m, vector<int>(n)); // Resize matrix to m x n

    cout << "Enter the elements of the matrix" << endl;
    for (auto &x : mat)
    {
        for (auto &y : x)
        {
            cin >> y;
        }
    }
    cout << diffDiago(mat, m, n);

    return 0;
}