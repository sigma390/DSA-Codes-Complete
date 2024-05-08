

#include<bits/stdc++.h>
using namespace std;



int gridways(int m, int n , int rows , int columns){
    //base case 
    if(rows==m-1 and columns ==n-1){
        return 1;
    }
    //corner case
    if (rows>=m or columns>=n)
    {
        return 0;

    }

    int ans{0};
    ans = gridways(m,n,rows+1,columns)+gridways(m,n,rows,columns+1)+gridways(m,n,rows+1,columns+1) ; // only Top down movement if , all movements allowed 
    return ans;
    

}

int main(){
    int m, n;
    cin>>m>>n;
    cout<<gridways(m,n,0,0);
    return 0;
}