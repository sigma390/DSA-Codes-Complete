#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    int arr[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "The Matrix is  : " << endl;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j];
        }
        cout << endl;
    }

    for (int i = 0; i < m; i++)
    {
        sort(arr[i], arr[i] + n);
    }
    cout << "New Way to print the Array" << endl;
    for (auto &x : arr)
    {
        for (auto &y : x)
        {
            cout << y;
        }
        cout << endl;
    }
    return 0;
}