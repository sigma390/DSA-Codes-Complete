#include<bits/stdc++.h>
using namespace std;

void helper(int m, int n, long long &sum){
    if (m>n)
    {
        return ;
    }
    sum = sum+m;
    helper(m+1,n,sum);
    
}




long long sumFirstN(long long n) {
    // Write your code here.


    long long sum {0};
   
  helper(1, n, sum);
     return sum;
}




int main(){
    cout<<sumFirstN(10);
    return 0;
}