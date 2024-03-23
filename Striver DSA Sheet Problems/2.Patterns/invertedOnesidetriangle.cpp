

#include <bits/stdc++.h>
using namespace std;

void Pattern(int n){
    for (int row = 1; row <= n; row++)
    {
       for (int j = 0; j < n -row+1 ; j++)
       {
        cout<<"* ";
       }
       cout<<endl;
       
    }
    

}


int main() {
	

    int x;
    cin>>x;
    Pattern(x);

	return 0;
}