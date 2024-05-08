#include<bits/stdc++.h>
using namespace std;

//Print Board function
void printBoard(int n , int board [][20]){

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
        
    }
    cout<<endl;
    

}
//can place chek function
bool canPlace(int n, int board[][20], int x , int y){
    //along the columns
    for (int k =0 ; k < x; k++)
    {
        if (board[k][y]==1) // y columns hai jo ki fix hai , apneko row wise dekhna hai 
        // either any queen exist in that column row by row
        {
            return false;
        }  
    }
    
    //along the left diagonal
    int i= x; //rows 
    int j = y; //columns
    while (i>=0 and j>=0)
    {
        if (board[i][j]==1)
        {
            return false;

        }
        i--; j--;
    }
    //along the Right diagonal
     i= x; //rows 
     j = y; //columns
    while (i>=0 and j>=0)
    {
        if (board[i][j]==1)
        {
            return false;

        }
        i--; j++; //columns should increase but rows should decrease

    }
    //if no any queen is present return true;
    return true;
    
}



//main function to solve the question
bool solve(int n , int board[][20], int i ){
    //base case
    if (i==n)
    {
        printBoard(n,board);
        return true;
    }
    //rec case
    //going through every row  and column
    for (int j = 0; j < n; j++)
    {
        if (canPlace(n, board , i , j))

        {
            board[i][j]=1;
            bool success = solve(n , board , i+1);
            if (success)
            {
                return true;
            }
            //backtrack means success == false
            board[i][j]=0;   
        }
    }   
    return false; 
}




int main(){
    int board[20][20]{0};
    int n{0};
    cin>>n;
    solve(n , board , 0);
    return 0;
}