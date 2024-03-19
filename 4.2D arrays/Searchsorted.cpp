#include<bits/stdc++.h>
using namespace std;

pair<int,int> searchSorted(int arr[][4],int n, int m, int k){


// out of bpundary case
if (k>arr[n-1][m-1] or k<arr[0][0])
{
    return {-1,-1};
}
int i = 0;
int j = m-1;

while (i<n and j>=0)
{
    if (arr[i][j]==k)
    {
        return {i,j};
    }
    else if (arr[i][j]>k)
    {
        j--;
    }
    else{
        i++;
    }

   
    
    
}

 return {-1,-1};




}




int main(){


    int arr[][4]={
        {10,20,30,40},
        {15,25,35,45},
        {27,29,37,48},
        {32,33,39,50}
    };
    int n= 4;
    int m = 4;

    pair<int,int> cords = searchSorted(arr,n,m,33);
    //print the sords 
    cout<<cords.first<<","<<cords.second<<endl;

    return 0;
}