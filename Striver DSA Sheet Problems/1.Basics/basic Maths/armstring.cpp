#include<bits/stdc++.h>
using namespace std;


void arm(int n){

    int d =0;
    int r = 0;
    int sum{0};
    int temp = n;
    while(temp!=0){
        temp = temp/10;
        d++;

    }
    temp = n;

    while (temp!=0)
    {
        r = temp%10;
    sum+=pow(r,d);
        temp = temp/10;
    }
    if (sum==n)
    {
        cout<<"Armstrong number!!"<<endl;
    }
    else{
        cout<<"not a Armstrong number!!"<<endl;
    }
    
    

    





}





int main(){
    
    int n {0};
    cin>>n;
    arm(n);

    return 0;
}