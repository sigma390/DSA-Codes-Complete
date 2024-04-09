#include<bits/stdc++.h>
using namespace std;
#include <vector>

std::vector<long long> factorialNumbers(long long n) {
    std::vector<long long> result;
    
    long long factorial = 1;
    int i = 1;
    
    while (factorial <= n) {
        result.push_back(factorial);
        ++i;
        factorial = 1;
        for (int j = 1; j <= i; ++j) {
            factorial *= j;
        }
    }
    
    return result;
}


int main(){
    return 0;
}