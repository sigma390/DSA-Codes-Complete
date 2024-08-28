// 22. Write a Program for Finding the Roots of a Quadratic Equation

#include <bits/stdc++.h>
using namespace std;

pair<int, int> SqrtRoots(int a, int b, int c)
{
    if (a == 0)
    {
        return {-1, -1};
    }
    // formula
    double firstRoot = (-b + sqrt(b * b - 4 * a * c)) / 2 * a;
    double secondRoot = (-b - sqrt(b * b - 4 * a * c)) / 2 * a;
    return {firstRoot, secondRoot};
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    pair<int, int> roots = SqrtRoots(a, b, c);
    cout << "Roots are : " << roots.first << " and " << roots.second << endl;
    return 0;
}