#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> one_d_array{11, 12, 13};

    //============> 2D Vector Initialisation <================
    /*there will be 3 rows and each Row is A Vector with 10 elements Initiated To 0
     Iterating Through the Grid */
    vector<vector<int>> arr(3, vector<int>(10, 0));

    //=============> Grid initialisation and iterating over a Grid <==========
    int rows = 4;
    int cols = 6;
    int initialval = 5;
    vector<vector<int>> grid(rows, vector<int>(cols, initialval));
    for (int row = 0; row < grid.size(); row++)
    {
        for (int col = 0; col < grid[row].size(); col++)
        {
            cout << grid[row][col] << ",";
        }
        cout << endl;
    }

    //===================> Normal One D array <========================
    vector<int> arrr{10, 20, 30};
    arrr.push_back(100);
    arrr.push_back(200);
    arrr.push_back(300);
    arrr.pop_back();
    arrr.insert(arrr.begin() + 3, 777);
    arrr.erase(arrr.begin() + 4); // particular Element Remove Krna
    int Sum = 0;
    Sum = accumulate(arrr.begin(), arrr.end(), 10); // 10 is initial value of The Variable that we are Going to Accumulate

    for (auto x : arrr)
    {
        cout << x << ",";
    }
    for (int i = 0; i < arrr.size(); i++)
    {
        cout << arrr[i] << ",";
    }

    return 0;
}