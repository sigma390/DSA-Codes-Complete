#include<bits/stdc++.h>
using namespace std;



int main(){
    char a[100] = "apple";
    char b[100];

    //str length
    cout<<strlen(a);
    //string copy

    strcpy(b,a);
    cout<<"\n"<<b<<endl;

    //str compare

    char c[] = "pappu";
    char d[] = "Bhosdi";
    cout<< strcmp(c,d)<<endl;
     
    //string concatination
    char web[] = "www.";
    char domain[] = "omkar.com";
    char e[] = "\0";
    cout<<strcpy(e,strcat(web,domain));
    return 0;
}