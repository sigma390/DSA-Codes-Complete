#include<bits/stdc++.h>
using namespace std;


void subsets(char *input, char *output , int i , int j){
//base case
    if (input[i]=='\0')
    {
        output[j]='\0';
        cout<<output<<endl;
        return ;
    }
    //rec case
    //include
    output[j] = input[i];
    subsets(input,output , i+1, j+1);
    //output
    subsets(input, output, i+1, j);
}



int main(){
    char input[100];
    char output[100];
    cin>>input;
    subsets(input,output,0,0);
    return 0;
}