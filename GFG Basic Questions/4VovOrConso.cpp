#include <bits/stdc++.h>
using namespace std;

int main()
{
    char x;
    cin >> x;
    if (x == 'a' or x == 'A' or
        x == 'e' or x == 'E' or
        x == 'i' or x == 'I' or
        x == 'o' or x == 'O' or
        x == 'u' or x == 'U')
    {
        cout << "Vowel";
    }
    else
    {
        cout << "Consonant";
    }
    return 0;
}