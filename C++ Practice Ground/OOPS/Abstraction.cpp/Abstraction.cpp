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
    Dog *d1 = new Dog(); // Allote Memoryt on heap

    d1->sound();
    delete d1; // free Memory
    return 0;
}