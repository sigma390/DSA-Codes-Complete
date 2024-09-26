// QUESTION 8
// There is a range given n and m in which we have to find the count all the prime pairs whose difference is 6. We
// have to find how many sets are there within a given range.
// Output:
// Output consists of single line, print the count prime pairs in given range. Else print"No Prime Pairs".
// Constraints:
// 2<=n<=1000
// n<=m<=2000
// Sample Input:
// 4
// 30
// Output:
// 6
// Explanation:
// (5, 11) (7, 13) (11, 17) (13, 19) (17, 23) (23, 29) . we have 6 prime pairs.
// Solution:
// Input -
// 101
// 500

#include <bits/stdc++.h>
using namespace std;

bool isPrime(int num)
{
    if (num < 2)
        return false;
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int primePairs(int start, int end)
{
    vector<int> primes;
    for (int i = start + 1; i <= end; i++)
    {
        if (isPrime(i))
        {
            primes.push_back(i);
        }
    }
    int cnt{0};
    for (int i = 0; i < primes.size(); i++)
    {
        for (int j = i + 1; j <= primes.size(); j++)
        {
            if (primes[j] - primes[i] == 6)
            {
                cnt++;
            }
        }
    }
    return cnt;
}

int main()
{
    cout << primePairs(101, 500);

    return 0;
}