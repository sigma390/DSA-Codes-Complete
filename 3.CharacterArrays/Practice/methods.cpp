

#include<bits/stdc++.h>
using namespace std;


int main(){
    char a[100] = "pappu";
    char b[100] = "bhosad";

    //length

    cout<<strlen(a)<<endl;
    cout<<strlen(b);

    //copy
    char c[10]="";
    char d[10] = "bhoasd";
    strcpy(c,d);
    cout<<c<<endl;

    //compare
    cout<<strcmp(a,b)<<endl;

    //concat 
    char web[] = "www.";
    char domain[] = "google.com";
    
    cout<< strcat(web,domain) <<endl;

    return 0;

}