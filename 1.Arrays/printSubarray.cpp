#include<iostream>
using namespace std;

void printSubrray(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        
        for(int j = i; j < n; j++)
        {
            for (int k = i; k <= j; k++)
            {
                cout<<arr[k]<<",";
            }
            cout<<endl;
            
        }
        cout<<endl;
    }
    
}


int main(){

    int arr[] = {10,20,30,40};
    int n = sizeof(arr)/sizeof(int);

    printSubrray(arr,n);



    return 0;

}