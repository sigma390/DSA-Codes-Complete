#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "Hello World";
    cout << s << endl;
    for (auto &x : s)
    {
        {
            if (isalpha(x))
            {
                {
                    if (islower(x))
                    {
                        x = toupper(x);
                    }
                    else
                    {
                        x = tolower(x);
                    }
                }
            }
        }
    }
    cout << s << endl;
    return 0;
}