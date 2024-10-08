// QUESTION 3
// Problem Statement:- Hobo’s Drawing teacher asks his class to open their books to a page number. Hobo can
// either start turning pages from the front of the book or from the back of the book. He always turns pages one at a
// time. When she opens the book, page 1 is always on the right side: When he flips page 1, he sees pages 2 and 3.
// Each page except the last page will always be printed on both sides. The last page may only be printed on the
// front, given the length of the book.
// If the book is n pages long, and he wants to turn to page p, what is the minimum number of pages he will turn?
// He can start at the beginning or the end of the book.
// Given n and p, find and print the minimum number of pages Hobo must turn in order to arrive at page p
// Function Description: Complete the countpage function in the editor below.
// It should return the minimum number of pages Hobo must turn.
// countpage has the following parameter(s):
//  n: the number of pages in the book
//  p: the page number to turn to
// Input Format
//  The first line contains an integer n, the number of pages in the book.
//  The second line contains an integer, p, the page that Hobo’s teacher wants her to turn to.
// Output Format: Print an integer denoting the minimum number of pages Hobo must turn to get to page p
// Sample Input
//  6
//  2
// Sample Output: 1
// PROGRAMS:

#include <bits/stdc++.h>
using namespace std;

int pageTurns(int n, int pn)
{
    int frontPageturns = pn / 2;
    int backPageTurns = n / 2 - pn / 2;
    return min(frontPageturns, backPageTurns);
}

int main()
{
    int n, pn;
    cin >> n >> pn;
    cout << pageTurns(n, pn);

    return 0;
}