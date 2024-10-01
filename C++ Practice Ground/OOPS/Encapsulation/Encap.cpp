#include <bits/stdc++.h>
using namespace std;

class Animal
{
public:
    string name;
    Animal(string name) : name(name)
    {
        cout << "Animal created: " << name << endl;
    }
};

class Bird
{
private:
    string typee;

public:
    Bird(string t) : typee(t)
    {
        cout << "Bird Created" << endl;
    }
    string getBirdType()
    {
        return typee;
    }
};

class Fish
{
protected:
    string species;
    int weight;

public:
    Fish(string spec, int wt) : species(spec), weight(wt) {}

protected:
    void swim()
    {
        cout << "Swimming" << endl;
    }
};
class Shark : protected Fish
{
public:
    string name;
    int len;
    Shark(string spec, int wt, string name, int len) : Fish(spec, wt)
    {
        this->name = name;
        this->len = len;
        cout << "Shark Created" << endl;
    }
    void swim()
    {
        cout << this->name << " Swimming" << endl;
    }
};

int main()
{
    string type = "Fly";
    Bird b1(type);
    cout << b1.getBirdType();
    Shark s1("Great White", 1200, "Sharko", 2);
    s1.swim();

    return 0;
}