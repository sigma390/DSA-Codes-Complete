#include<bits/stdc++.h>
using namespace  std;


void CountViews(int *viewptr){
    *viewptr = *viewptr+10;

}



int main(){

    int views = 100;
    cout<<views<<endl;

    //function call
    CountViews(&views);
    cout<<views<<endl;
    

    return 0;
}