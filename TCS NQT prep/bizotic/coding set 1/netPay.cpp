// PROGRAM 15
// Write a C++ program to compute net pay of an employee using structure.
// Input Format: First input consist of name of an employee. Second input consist of Basic pay of an employee.
// Third input consist of Dearness Allowance of an employee. Fourth input consist of Hra of an employee.
// Note: employee denoted as structure variable.
// Output Format: Refer the sample output
// Test Case 1
// Input
// Jack
// 90.8
// 70.9
// 10.9
// Output
// Net pay is : 172.6

#include <bits/stdc++.h>
using namespace std;
class Employee
{
    string name;
    float bp, da, hra;

public:
    Employee(string name, float bp, float da, float hra) : name(name), bp(bp), da(da), hra(hra)
    {
    }
    // Destructor
    ~Employee()
    {
        cout << "Employee " << name << " is destroyed." << endl;
    }

    float netPay()
    {
        return bp + da + hra;
    }
};

int main()
{
    Employee *emp1 = new Employee("Jack", 90.8, 70.9, 10.9);
    cout << "Net pay is : " << emp1->netPay() << endl;
    return 0;
}