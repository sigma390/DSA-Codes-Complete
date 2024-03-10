#include<bits/stdc++.h>
using namespace std;
//print arays and pass by referance concept

void print(int arr[][100], int m, int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<arr[i][j];

        }
        cout<<endl;
        
    }
    
}


int main(){

    int m,n;
    int arr[100][100];
    cin>>n>>m;

    //to take input
    for (int i = 0; i < n; i++)//rows
    {
        for (int j = 0; j < m; j++) //colums
        {
            cin>>arr[i][j];
        }
        
    }
    
    print(arr,m,n);





    return 0;
}