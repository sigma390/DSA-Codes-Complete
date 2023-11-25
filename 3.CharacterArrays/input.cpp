#include<iostream>
#include<vector>
using namespace std;


int main(){
    char a[10];
    char b[20];
    cin>>a; // cant read white spaces
    cout<<a;
    //=======> solutions <============
    char temp = cin.get(); //input buffer
    int len{1};
    while(temp!='\n'){
        len++;
        cout<<temp;
        temp = cin.get();
    }
    

   
    
    return 0;
}