#include<bits/stdc++.h>
using namespace std;







int main(){
    string s = "a man is very very bad and very nice";
    string y;
    getline(cin, y);
//     //find first Occcurance 
//    int index =  s.find(y);
//    if (index!=-1)
//    {
//     cout<<"First Occurance at :"<<index<<endl;
//    }
//    if (index==-1)
//    {
//     cout<<"String Not Found!!!";
//    }
//    //second Occurance 
//    index = s.find(y, index+1);
//    if (index!=-1)
//    {
//     cout<<"Second Occurance at :"<<index<<endl;
//    }
//all Occurances
  int index{0};
   while (index!=-1)
   {
    index = s.find(y, index+1);
    
    cout<<index<<endl;
   }
   
   
   


    return 0;
}