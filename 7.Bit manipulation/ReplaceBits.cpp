#include<bits/stdc++.h>
using namespace std;



void clearRangeIBits(int &n, int i, int j) {
    int msk1 = ~0 << (j + 1);
    int msk2 = (1 << i) - 1;
    int msk = msk1 | msk2;
    n = (n & msk);
}

void replaceBits(int &n, int i, int j, int m) {
    clearRangeIBits(n, i, j);
    int msk = m << i;
    n = n | msk;
    cout << n << endl;
}

int main() {
    int n = 127;
    int i, j, m;
    cin >> i >> j >> m;
    replaceBits(n, i, j, m);
    return 0;
}