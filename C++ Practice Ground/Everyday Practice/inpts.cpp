#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    getline(cin, str);
    // good for Word Extraction
    stringstream ss(str);
    string word;
    while (ss >> word)
    {
        cout << word << endl;
    }

    return 0;
}