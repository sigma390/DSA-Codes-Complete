#include<bits/stdc++.h>
using namespace std;


int main(){


    char inpt[1000];
    cin.getline( inpt,1000);
    char *tkn = strtok(inpt, " "); //split only once  first call we pass string but in subsequent calls pas NULL
    while (tkn!=NULL)
    {
        cout<<tkn<<endl;
        tkn = strtok(NULL, " ");
    }
    
    return 0;
}