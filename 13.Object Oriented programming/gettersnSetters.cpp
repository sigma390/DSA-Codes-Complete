#include<bits/stdc++.h>
using namespace std;


class Product {
    private:
    int id;
    int name[100];

    public:  //not recommended  as anyone can access from outside also
    int mrp;
    int selling_price;

    public:
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



};

int main(){
    Product camera;
    camera.setmrp(100);//INITIALISATION OF price
    camera.setSelling(150);
    cout<<"MRP : "<<camera.getMrp()<<endl;
    cout<<"Selling price : "<<camera.getSellingprice()<<endl;

    return 0;
}