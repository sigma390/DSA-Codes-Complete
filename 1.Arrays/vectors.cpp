#include<iostream>
#include<vector>
using namespace std;

//vectors dynamic arrays

int main(){

    //demo vector
    vector<int>arr = {1,2,3,4,5,6};

    //push_back fxn to elements at enhd
    arr.push_back(15);
    //arr size no of elemets
    cout<<arr.size()<<endl;
    //arr capacity
    cout<<arr.capacity()<<endl;
    return 0;
}