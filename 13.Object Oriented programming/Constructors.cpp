

#include<bits/stdc++.h>
using namespace std;


class Product {
    private:
    int id;
    char name[100];

    public:  //not recommended  as anyone can access from outside also
    int mrp;
    int selling_price;

    public:

    //constructors 
    Product(){
        cout<<"We are in constructor 1"<<endl;
    }
    //========>  Parameterised Constructor
    Product(int id , char *n ,  int mrp, int selling_price){
        this->id = id;
        this->mrp = mrp;
        this->selling_price = selling_price;
        strcpy(name, n);
    }

    //setters
    void setmrp(int price){
        mrp = price;

    }
    void setSelling(int price){
        selling_price = price;
    }
    //getters because still the mrp , and selling_price arent accessible outside class
    int getMrp(){
        return mrp;
    }
    int getSellingprice(){
        return selling_price;
    }
    string getName(){
        return name;
    }



};

int main(){
    Product camera;
    Product bike(2,"CBR",210000,320000);
    camera.setmrp(100);//INITIALISATION OF price
    camera.setSelling(150);
    cout<<"MRP : "<<camera.getMrp()<<endl;
    cout<<"Selling price : "<<camera.getSellingprice()<<endl;

    cout<<"Selling Price of "<<bike.getName()<<" is "<<bike.getSellingprice()<<endl;

    return 0;
}