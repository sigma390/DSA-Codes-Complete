#include <iostream>
using namespace std;

int setRightmost(int &n) {
    if (n == 0) return 1; // If n is 0, return 1 (setting the rightmost unset bit to 1)

    int mask = 1;
    while (n & mask) {
        mask <<= 1; // Shift the mask to the left until it finds the rightmost unset bit
    }

    // If all bits are already set to 1, return the original number
    if (mask == 0) {
        return n;
    } else {
        // Set the rightmost unset bit to 1
        n |= mask;
        return n;
    }
}

int main() {
    int n = 9;
    cout << setRightmost(n); // Output: 11

    // Test case where all bits are set to 1
    n = 15;
    cout << endl << setRightmost(n); // Output: 15 (original number is returned)

    return 0;
}
