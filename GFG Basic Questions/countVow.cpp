// 9. Write a Program to Count the Number of Vowels

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "I am Omkar and I love Coding";
    int cnt{0};
    for (auto &x : str)
    {
        if (x == 'a' || x == 'e' || x == 'i' ||
            x == 'o' || x == 'u' || x == 'A' ||
            x == 'E' || x == 'I' || x == 'O' ||
            x == 'U')
        {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}