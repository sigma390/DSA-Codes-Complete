#include<bits/stdc++.h>
using namespace std;


class Product {
    private:
    int id;
    int name[100];
    public:  //not recommended  as anyone can access from outside also
    int mrp;
    int selling_price;



};

int main(){
    Product camera;
    camera.mrp  = 100; //INITIALISATION OF price
    camera.selling_price = 150;
    cout<<"MRP : "<<camera.mrp<<endl;

    return 0;
}