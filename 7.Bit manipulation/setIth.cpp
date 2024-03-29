#include<bits/stdc++.h>
using namespace std;

void setIth(int &n, int i){
    int msk = 1<<i;
    n = (n| msk);
}




int main(){

    int n{10};
    cout<<"Number before : "<<n<<endl;
    int i;
    cin>>i;

    setIth(n, i);
    cout<<"Number after : "<<n<<endl;


    return 0;
}