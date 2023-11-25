#include<iostream>
#include<vector>
using namespace std;


int main(){
 
   char para[1000];

   cin.getline(para,30,'\n'); // '\n' indicate it will stop if we enter or if '.' then also
   cout<<para;
    
    return 0;
}