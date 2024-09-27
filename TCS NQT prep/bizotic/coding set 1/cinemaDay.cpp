
// PROGRAM 6
// There is a practice of showing a cinema in the auditorium of a college on a cinema day. A cinema day is a day
// where the sum of Day(D), Month(M), Year(Y)should be divisible by product of 3 and 4. On that particular day the
// total number of students in the hostel should be greater than 50 but less than 100. Write a C++ program to find
// whether the given day is cinema day or not.
// Test Case 1
// Input
// 3 3 1914 76
// Output
// Cinema Day

#include <bits/stdc++.h>
using namespace std;
void cinemaDay(int d, int m, int y, int students)
{
    int sum = d + m + y;
    if (sum % (3 * 4) == 0 and (students < 100 and students > 50))
        cout << "Cinema Day";
    else
        cout << "Not a Cinema Day";
}

int main()
{
    cinemaDay(3, 3, 1914, 76);

    return 0;
}