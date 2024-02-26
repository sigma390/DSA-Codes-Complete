#include<bits/stdc++.h>
using namespace std;

int main(){
    char para[1000];
    char ch;
    ch = cin.get();
    //count;
    int dig{0};
    int alphas{0};
    int space{0}; 

    while (ch!= '\n')
    {
        if (ch>='0' and ch<='9')
        {
           dig++;
        }
        if ((ch>='a' | ch>='A') and (ch<='z' | ch<='Z'))
        {
           alphas++;
        }
        if (ch==' ')
        {
           space++;
        }
        ch = cin.get();
        
    }
    cout<<dig<<endl<<alphas<<endl<<space<<endl;
     
    return 0;
}