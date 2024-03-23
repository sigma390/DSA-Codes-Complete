#include <bits/stdc++.h>
using namespace std;
void stars(int n){
    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<"*";

        }
        cout<<"\n";
        
    }
    
}
int main() {
	

    int x;
    cin>>x;
    stars(x);

	return 0;
}