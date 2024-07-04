// // virtual functions in C++ are member functions that you expect to be redefined
//  in derived classes. When you use a virtual function,
//   the function that is called is determined at runtime, which is known as runtime
//    polymorphism or dynamic dispatch.
// // Here’s a simple example to illustrate
//  the concept of virtual functions and runtime polymorphism.

#include<bits/stdc++.h>
using namespace std;


class Shape {
    public:

    //virtual Function
    virtual void draw(){
        cout<<"Drawing Shape";
    }
};

//derived class
class circle: public Shape{
    public:
    void draw() override{
        cout<<"\nDrawing Circle";
    }
};

class rectangle: public Shape{
    public:
    void draw() override{
        cout<<"\nDrawing Rectangle";
    }
};

void Display(Shape * x){
    x->draw();
}




int main(){

    Shape *Shape1 = new Shape();
    Shape *Shape2 = new circle();
    Shape *Shape3 = new rectangle();
    Display(Shape1);
    Display(Shape2);
    Display(Shape3);

    delete Shape1;
    delete Shape2;
    delete Shape3;



    return 0;
}