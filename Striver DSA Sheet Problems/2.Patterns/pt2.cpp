#include <bits/stdc++.h>
using namespace std;

void noOfstars(int n){
    for (int i = 0; i < n; i++)
    {
        cout<<"*";
    }
    
}
void stars(int n){
    for (int i = 1; i <=n; i++)
    {
        noOfstars(i);
        cout<<"\n";
        
    }
    
}
    



int main() {
	

    int x;
    cin>>x;
    stars(x);

	return 0;
}