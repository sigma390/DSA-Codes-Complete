#include<bits/stdc++.h>
using namespace std;

void housingT(int *plots , int n ,  int k){

    //two Pointers and Current  Sum
    int i=0;
    int j=0;
    int cs = 0;


    //Main Condition the j pointer  must not xceed the Array length
    while (j<n)
    {
        //initiate Cs expand means Till cs< k
        cs += plots[j];
        j++;

        //Contract if k<cs
        while(i<j and cs>k){
            cs  = cs -plots[i];
            i++;

        }

        //cherk cs = k
        if(cs==k){
            cout<<i<<"-"<<j-1<<endl;;
        }

        

       

    }
    return;
    


}




int main(){

    int plots [] = {1,3,2,1,4,1,3,2,1,1};
    int n = sizeof(plots)/sizeof(int);
    int k = 8;

    housingT(plots, n , k);


    return 0;
}