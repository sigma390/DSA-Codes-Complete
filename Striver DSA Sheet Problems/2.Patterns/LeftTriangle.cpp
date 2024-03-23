





#include <bits/stdc++.h>
using namespace std;
void Pattern(int n){
    for (int row = 0; row < 2*n; row++)
    {
        //noob Code
        if (row >n)
        {
        for (int j = 1; j <= 2*n-row ; j++)
       {
        cout<<"* ";
       }
        }
        else{
        for (int col = 1; col <= row ; col++)
       {
        cout<<"* ";
       }
        }
        

    //using ternary operator
    // int totalCols = row>n?2*n-row:row;
    // for (int col = 0; col < totalCols ; col++)
    //    {
    //     cout<<"* ";
    //    }

        cout<<endl;  
    }
    

}

int main() {
	

    int x;
    cin>>x;
    Pattern(x);

	return 0;
}