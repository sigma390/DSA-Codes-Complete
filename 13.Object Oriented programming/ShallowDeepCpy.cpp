#include <bits/stdc++.h>
using namespace std;

class Product {
private:
    int id;
    char *name;

public:  // Not recommended as anyone can access from outside also
    int mrp;
    int selling_price;

public:
    // Constructor
    Product() {
        id = 0;
        name = nullptr;
        mrp = 0;
        selling_price = 0;
    }

    // Parameterized Constructor
    Product(int id, const char *n, int mrp, int selling_price) {
        this->id = id;
        this->mrp = mrp;
        this->selling_price = selling_price;
        name = new char[strlen(n) + 1];
        strcpy(name, n);
    }

    // Copy Constructor
    Product(const Product &y) {
        id = y.id;
        mrp = y.mrp;
        selling_price = y.selling_price;
        name = new char[strlen(y.name) + 1];
        strcpy(name, y.name);
    }

    // Destructor
    ~Product() {
        delete[] name;
    }

    // Setters
    void setMrp(int price) {
        if (price >= 0) {
            mrp = price;
        }
    }

    void setSelling(int price) {
        if (price >= 0) {
            selling_price = price;
        }
    }

    // Getters
    int getMrp() {
        return mrp;
    }

    int getSellingPrice() {
        return selling_price;
    }

    string getName() {
        return name != nullptr ? string(name) : "";
    }

    void showDetails() {
        cout << "Name: " << (name ? name : "Unnamed") << endl;
        cout << "Id: " << id << endl;
        cout << "Selling price: " << selling_price << endl;
        cout << "MRP: " << mrp << endl;
        cout << "//------------------//" << endl;
    }

    void setName(const char *newName) {
        if (name != nullptr) {
            delete[] name;
        }
        name = new char[strlen(newName) + 1];
        strcpy(name, newName);
    }
};

int main() {
    Product camera;
    Product bike(2, "CBR", 210000, 320000);
    
    // Create a copy of `bike` using the copy constructor
    Product AtxBike(bike);
    
    // Set a new name for the copied bike
    AtxBike.setName("ATX");

    // Display details of the original and copied bikes
    bike.showDetails();
    AtxBike.showDetails();
    
    return 0;
}
