

#include<bits/stdc++.h>
using namespace std;


vector<string> subsets(char *input, char *output , int i , int j){
//base case
    vector<string>arr;
    if (input[i]=='\0')
    {
        output[j]='\0';
        string subset(output);// convert to string

        arr.push_back(subset); // push  to array 
        return arr ;
    }
    //rec case
    //include
    output[j] = input[i];
    //separate 2 arrays 

    vector<string> included = subsets(input,output , i+1, j+1);
    arr.insert(arr.end(), included.begin(), included.end());

    //output
    vector<string> excluded = subsets(input, output, i+1, j);
    arr.insert(arr.end(), excluded.begin(), excluded.end());

    return arr;
}



int main(){
    char input[100];
    char output[100];
    cin>>input;
   vector< string> arrrr =  subsets(input,output,0,0);
    for (auto x : arrrr)
    {
        cout<<x<<",";
    }
    
    return 0;
}