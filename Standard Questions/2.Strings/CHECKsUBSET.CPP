#include<bits/stdc++.h>
using namespace std;

bool subset(string s1, string s2){

    int i = s1.length()-1;
    int j = s2.length()-1;

    while (j!=-1 and i>=0)
    {
        if (s1[i]==s2[j])
        {
            j--;
            i--;
        }
        else{
            i--;
        }
        
    }
    if(j==-1){
        return true;
    }
    else{
        return false;
    }


}



int main(){

    string s1,s2;
    cin>>s1>>s2;
    cout<<subset(s1,s2);
   
    
    
    return 0;
}