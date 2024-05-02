#include<bits/stdc++.h>
using namespace std;

string spell[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};



void PrintNum(int n){


    //base case
    if (n==0)
    {
        return;        /* code */
    }

    int last_Dig = n%10;
    //make recursive call as we wanna print the first result at the last
    PrintNum(n/10)    ;
    cout<<spell[last_Dig]<<",";


}



int main(){
    PrintNum(121);
    return 0;
}