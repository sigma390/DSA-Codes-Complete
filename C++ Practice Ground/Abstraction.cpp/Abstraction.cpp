#include <bits/stdc++.h>
using namespace std;

class Animal
{
public:
    virtual void sound() = 0;
};

class Dog : public Animal
{
public:
    void sound() override
    {
        cout << "Woof Woof" << endl;
    }
};

int main()
{
    Dog *d1 = new Dog();
    d1->sound();
    return 0;
}