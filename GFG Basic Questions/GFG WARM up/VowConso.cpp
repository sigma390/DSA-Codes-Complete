#include <bits/stdc++.h>
using namespace std;

void VowConso(char c)
{
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
    {
        cout << "Vowel";
    }
    else
    {
        cout << "Consonant";
    }
}

int main()
{
    char c;
    cin >> c;
    VowConso(c);

    return 0;
}