#include<bits/stdc++.h>
using namespace std;

//forward Declaration
class B;

//Class base
class A{
    private :
        int a;
    public:
        A():a(15){}; //constructor
        int getA(){
            return this->a;
        }

    //fridn class Declaration
    friend class B;

};

class B{
    public:
        void changeA(A &x){
            x.a = 111;
        }
};

int main(){
    A a1 ;
    B b1;
    cout<<a1.getA()<<endl;
    b1.changeA(a1);
    cout<<a1.getA()<<endl;
    return 0;
}