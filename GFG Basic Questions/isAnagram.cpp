
// 27. Write a Program to Check if Two Strings are Anagram or Not

#include <bits/stdc++.h>
using namespace std;

bool isAnagram(string s1, string s2)
{
    // Remove spaces and convert to lowercase
    s1.erase(remove(s1.begin(), s1.end(), ' '), s1.end());
    s2.erase(remove(s2.begin(), s2.end(), ' '), s2.end());
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
    string s3 = s1;
    string s4 = s2;
    sort(s3.begin(), s3.end());
    sort(s4.begin(), s4.end());
    return s3 == s4;
}

int main()
{
    string s1 = "listen";
    string s2 = "silent";
    cout << "Are " << s1 << " and " << s2 << " anagrams? "
         << (isAnagram(s1, s2) ? "Yes" : "No") << endl;
    return 0;
}