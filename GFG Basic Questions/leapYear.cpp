

#include<bits/stdc++.h>
using namespace std;

bool isLeap(int year){
    if(year%400==0) return true;
    if(year%100==0) return false;
    return false;
}



int main(){
    cout<<isLeap(2000);
    return 0;
}