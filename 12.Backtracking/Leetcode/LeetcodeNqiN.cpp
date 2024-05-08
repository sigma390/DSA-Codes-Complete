

#include<bits/stdc++.h>
using namespace std;

//Print Board function
void printBoard(int n , vector<vector<string>>&arr){

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<arr[i][j];
        }
        cout<<endl;
        
    }
    cout<<endl;
    

}
//can place chek function
bool canPlace(int n, vector<vector<string>>&arr, int x , int y){
    //along the columns
    for (int k =0 ; k < x; k++)
    {
        if (arr[k][y]=="Q") // y columns hai jo ki fix hai , apneko row wise dekhna hai 
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
        if (arr[i][j]=="Q")
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
        if (arr[i][j]=="Q")
        {
            return false;

        }
        i--; j++; //columns should increase but rows should decrease

    }
    //if no any queen is present return true;
    return true;
    
}



//main function to solve the question
int solve(int n , vector<vector<string>>&arr, int i ){
    //base case
    if (i==n)
    {
        printBoard(n,arr);
        return 1;
    }
    //rec case
    //going through every row  and column
    // ways 
    int ways{0};
    for (int j = 0; j < n; j++)
    {
        if (canPlace(n, arr , i , j))

        {
            arr[i][j]="Q";
            ways+= solve(n , arr , i+1); //each row  is gonna form its own ans , add all answers and return back to main
            
            arr[i][j]='*';   
        }
    }   
    return ways; 
}




int main(){
    // Initialize the board with all cells set to "*"
    int n{0};
     cin>>n;
    vector<vector<string>> arr(n, vector<string>(n, "*"));
    
   
    solve(n , arr , 0);
    return 0;
}