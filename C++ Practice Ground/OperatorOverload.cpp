#include<bits/stdc++.h>
using namespace std;

class Complex
{
    public:
    int r;
    int i;
    Complex(int r, int i){
        this->r = r;
       this->i  =i;
    }
    void display(){
        cout<<"Complex Number is :"<<r<<" + "<<i<<"i"<<endl;
    }

    //operator Overloading
    Complex operator+(Complex c){
        return Complex(r+c.r , i+c.i);
    }


};



int main(){
   Complex a =  Complex(2,3);
      Complex b =  Complex(4,5);
      Complex c = a+b;
      c.display();

    return 0;
}