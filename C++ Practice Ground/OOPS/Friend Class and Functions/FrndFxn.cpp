#include<bits/stdc++.h>
using namespace std;



class A{
    private :
    int Width;
    public:
    A():Width(0){};

    //frend Function declaration
    // Keyword friend RetureType unctionName(Parameters);

    friend void PrintWidth(A a); //a is Object ofd class A


};
//Function Definition 
void PrintWidth(A a){
    cout<<a.Width<<endl;
}

int main(){
    A x ;
    PrintWidth(x);
    return 0;
}