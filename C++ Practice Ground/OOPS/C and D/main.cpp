#include <bits/stdc++.h>
using namespace std;

class Car
{
public:
    string name;
    int year;
    string model;
    string company;
    int topSpeed;
    int price;

    // Default constructor
    Car()
    {
        cout << "Default Constructor Called" << endl;
        name = "Unknown";
        year = 0;
        model = "Unknown";
        company = "Unknown";
        topSpeed = 0;
        price = 0;
    }

    // Parameterized constructor
    Car(string name, int year, string model, string company, int topSpeed, int price)
    {
        cout << "Parameterized Constructor Called" << endl;
        this->name = name;
        this->year = year;
        this->model = model;
        this->company = company;
        this->topSpeed = topSpeed;
        this->price = price;
    }

    void showDetails()
    {
        cout << "Show Details:" << endl;
        cout << "Name: " << name << endl;
        cout << "Year: " << year << endl;
        cout << "Model: " << model << endl;
        cout << "Company: " << company << endl;
        cout << "Top Speed: " << topSpeed << " km/h" << endl;
        cout << "Price: $" << price << endl;
    }
};

int main()
{
    // Creating an object using the default constructor
    Car c1;
    c1.showDetails();

    cout << "----------------------------" << endl;

    // Creating an object using the parameterized constructor
    Car c2("Clara", 2018, "M4", "BMW", 320, 95000);
    c2.showDetails();

    return 0;
}
