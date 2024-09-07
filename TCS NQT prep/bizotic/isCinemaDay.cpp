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
// Test Case 2
// Input
// 27 10 1995 50
// Output
// Not a Cinema Day
#include <bits/stdc++.h>
using namespace std;

void isCinema(int d, int m, int y, int students)
{
    if (students > 50 and students < 100)
    {
        int prod = 3 * 4;
        if ((d + m + y) % prod == 0)
        {
            cout << "its cinema Day";
        }
        else
        {
            cout << "Not a Cinema Day";
        }
    }
}

int main()
{
    int d, m, y;
    cin >> d >> m >> y;
    int std;
    cin >> std;
    isCinema(d, m, y, std);
    return 0;
}
