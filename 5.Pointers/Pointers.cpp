#include<bits/stdc++.h>
using namespace  std;



int main(){

    int x{10};
    cout<<&x<<endl;

    // pointer

    int * ptr = &x;
    cout<<ptr<<endl;

    //pointer to Pointer
        int ** ptr2 = &ptr;
        cout<<ptr2<<endl;

    

    return 0;
}