#include<bits/stdc++.h>
using namespace std;



//custom c omparator

bool compare (string a , string b){
    if(a.length()==b.length()){
        return a <b;

    }
    return a.length() < b.length();
}






void subsets(char *input, char *output , int i , int j , vector<string> &result){
//base case

    if (input[i]=='\0')
    {
        output[j]='\0';
        string temp(output);
        result.push_back(temp);
        return ;
    }
    //rec case
    //include
    output[j] = input[i];
    subsets(input,output , i+1, j+1 , result);
    //output
    subsets(input, output, i+1, j,result);
}



int main(){
    char input[100];
    char output[100];
    vector<string> result ;

    cin>>input;
    subsets(input,output,0,0, result);
    sort(result.begin(), result.end(), compare);
    for (auto x : result)
    {
        cout<<x<<",";
    }
    
    
    
    return 0;
}