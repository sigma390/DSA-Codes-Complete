// PROGRAM 18
// Selvam want to display a greeting message each day using a display on the board. He don't have computer
// knowledge. Any how due to size of the board constrain his greeting message will never exceed 50 characters. You
// want to get the greeting message and display it on the board.
// Test Case 1
// Input
// Good Morning! Have a happy day
// Output
// Good Morning! Have a happy day

#include <bits/stdc++.h>
using namespace std;

int main()
{
    char arr[50];
    cout << "Enter your greeting message: ";
    cin.getline(arr, 50);
    cout << "Your greeting message is: " << arr << endl;
    return 0;
}