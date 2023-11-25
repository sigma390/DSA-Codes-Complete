#include<iostream>
#include<vector>
using namespace std;


int main(){
    char para[1000];
    // char b[20];
    // cin>>a; // cant read white spaces
    // cout<<a;
    //=======> solutions <============
    char temp = cin.get(); //input buffer  


    int len{1};
    //input as well as storing
    while(temp!='#'){
        para[len++] = temp;
        temp = cin.get();
    }
    

   cout<<"\nlength is :"<<len;
   cout<<para<<endl;
    
    return 0;
}