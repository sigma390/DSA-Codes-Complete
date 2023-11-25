#include<iostream>
#include<vector>
using namespace std;


int main(){
 
    char ch;
    ch = cin.get(); //input buffer  
    //vars to count 
    int alpha{0};
    int digits{0};
    int spaces{0};
    //input as well as storing
    while(ch!='\n'){
        
        if (ch>='0' and ch<='9')
        {
           digits++;
        }
        else if ((ch>='a' and ch<='z') or (ch>='A' and ch<='Z') )
        {
            alpha++;

        }
        else if (ch==' ' or ch =='\t')
        {
            spaces++;
        }
        
        ch = cin.get();
        
    }
    

        cout<<"Total alpha:"<<alpha<<endl;
        cout<<"Total digits:"<<digits<<endl;
        cout<<"Total spaces:"<<spaces<<endl;

   
    
    return 0;
}