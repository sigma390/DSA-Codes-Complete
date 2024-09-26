// QUESTION 7
// Write a program to find the count of numbers which consists of unique digits.
// Input:
// Input consist of two Integer lower and upper value of an range
// Output:
// Output consists of single line, print the count of unique digits in given range. Else Print "No Unique Number"
// Solution:
// Input -
// 10
// 15

#include <bits/stdc++.h>
using namespace std;
bool isUnique(int num)
{
    string s = to_string(num);
    set<char> digs;
    bool flag = false;
    for (auto x : s)
    {
        if (digs.find(x) != digs.end())
        {
            {
                flag = false;
            }
            digs.insert(x);
        }
        flag = true;
    }
    return flag;
}
int uniq(int start, int end)
{
    int cnt{0};
    for (int i = start + 1; i <= end; i++)
    {
        if (isUnique(i))
            cnt++;
    }
    return cnt;
}

int main()
{
    cout << uniq(10, 15);

    return 0;
}
