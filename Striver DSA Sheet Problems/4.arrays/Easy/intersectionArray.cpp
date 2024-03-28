
#include<bits/stdc++.h>
using namespace std;


vector<int>Intersection(vector<int>a ,vector<int>b){
    int n1 = a.size();
    int n2 = b.size();
    

    vector<int>in;
    int arr[n2] = {0};
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
           if ((a[i]==b[j])&& arr[j]==0)
           {
            in.push_back(a[i]);
            arr[j]=1;
           }
           
        }
        
    }
    
     
    
    
    return in; 
}




int main(){

    vector<int>a = {1,2,3,4,5,6};
    vector<int>b = {3,4,5,6,8,9};

    vector<int> c = Intersection(a,b);
    for (auto &&i : c)
    {
        cout<<i<<",";
    }
    





    return 0;
}