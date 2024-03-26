
#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<vector<int>> arr = {
        {1,2,3},
        {4,5,6},{
            7,8,9
        }
    };

    //print using different methds


// =========> Range based for loop <==========
    for (auto &&i : arr)
    {
        for (auto &&j : i)
        {
            cout<<j<<",";
        }
        cout<<"\n";
    }

// iterator

for (auto rows = arr.begin(); rows != arr.end();rows++)
{
    for (auto elem = rows -> begin(); elem != rows-> end(); ++elem) {
            std::cout << *elem << " ";
        }
    
}
//1d vector

vector<int> ptr = {1,2,3,4,5,6};
//old iterator way
for ( vector<int>::iterator it  = ptr.begin(); it != ptr.end(); it++)
{
    cout<<*it<<",";
}

    



}