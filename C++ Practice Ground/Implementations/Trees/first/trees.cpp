

#include <bits/stdc++.h>
using namespace std;
class Node
{
    int data;
    Node *left;
    Node *right;

public:
    Node(int data) : data(data)
    {
        left = right = nullptr;
    }
    // Destructor
    ~Node()
    {
        // Recursively delete left and right children
        delete left;
        delete right;
    }
};

int main()
{
    return 0;
}