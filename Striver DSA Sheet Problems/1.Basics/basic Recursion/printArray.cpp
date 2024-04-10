#include<bits/stdc++.h>
using namespace std;

void printHElps(int m,int x,vector<int>&res){
    if (m>x)
    {
        return ;
    }
    res.push_back(m);
    printHElps(m+1,x,res);
    

}



vector<int> printN(int x){
    vector<int>res;
    
    printHElps(1,x, res);
    
    return res;
}





int main(){
    int x;
    cin>>x;
    vector<int>r = printN(x);
    for (auto i : r)
    {
        cout<<i<<",";
    }
    
    return 0;
}
