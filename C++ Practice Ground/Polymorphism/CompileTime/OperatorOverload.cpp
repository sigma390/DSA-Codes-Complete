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
        Complex c3 = Complex(r+c.r , i+c.i); 
        return c3;
    }
    Complex operator-(Complex X){
        float a = r-X.r ;
        float b = i-X.i;
        Complex res = Complex(a,b);
        return res;
    }


};

//Counter Operator OverLoading prefix and Postfix
class Counter
{
private:
    /* data */
    int cnt;

public:
    //constructor
    Counter():cnt(0){};

    //get Counter 
    int getCount(){
        return cnt;
    }
    //Overloading

    //prefix
    Counter& operator++(){
        ++cnt;
        return *this;
        
        
        

    }
    //postfix
    Counter operator++(int){
        Counter temp = *this;
        cnt++;
        return temp;

    }

};





int main(){
    //+ operator Overloading !!!
      Complex a =  Complex(2,3);
      Complex b =  Complex(4,5);
      Complex c = a+b;
      Complex d = a-b;
    c.display();
    d.display();

    //++ operator Overloading
    Counter x;
    cout<<"Initially Count Value : "<<x.getCount()<<endl;
    ++x;
    cout<<"After Pre Increment : "<<x.getCount()<<endl;
    x++;
    cout<<"After Post Increment : "<<x.getCount()<<endl;
    

    return 0;
}