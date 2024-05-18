#include<bits/stdc++.h>
using namespace std;


void stockspan(int prices[], int nd, int span[]){
    //desclare a stack
    stack<int> c;
    //initial condition
    c.push(0);
    span[0] = 1;
    //looping
    for (int i = 1; i <=nd-1; i++)
    {
        int currP = prices[i];
        while (!c.empty() and prices[c.top()]<=currP){
            c.pop();
        }
        if (!c.empty())
        {
            int prev_high = c.top();
            span[i] = i-prev_high;
        }
        else{
            span[i] = i+1;
        }
        c.push(i);
      
        
    }
    
}



int main(){
    int prices [] = {100,80,60,70,60,75,85};
    int n = sizeof(prices)/sizeof(int);
    int span[1000000] = {0};

    stockspan(prices, n , span);
    for (auto x : span)
    {
        cout<<x<<" ";
    }
    



    return 0;
}