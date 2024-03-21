#include<bits/stdc++.h>
using namespace  std;

int main(){


    int n;
    cin>>n;
    int *darr = new int[n];
    cout<<darr<<endl;// print address of that dynamic memory block
    for (int i = 0; i < n; i++)
    {
       darr[i] = i;
       cout<<darr[i]<<",";
    }

    //delete that
    delete [] darr;
    return 0;
    



}