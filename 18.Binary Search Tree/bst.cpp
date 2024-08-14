
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int key;
    Node *left;
    Node *right;

    Node(int d) : key(d), left(nullptr), right(nullptr) {}
};

// Insert Function
Node *insert(Node *root, int key)
{
    // base Case if , root is Null then , rerturn a New Node With value as KEY
    if (root == NULL)
    {
        return new Node(key);
    }
    // rec Case chek key is Less or More than root Node
    if (root->key > key)
    {
        root->left = insert(root->left, key);
    }
    else
    {
        root->right = insert(root->right, key);
    }
    return root;
}

void printInOrder(Node *root)
{
    if (root == NULL)
        return;
    printInOrder(root->left);
    cout << root->key << " ";
    printInOrder(root->right);
}

int main()
{
    Node *root = NULL;
    int a[] = {8, 3, 10, 1, 6, 14, 4, 7, 13};
    for (auto x : a)
    {
        root = insert(root, x);
    }
    printInOrder(root);
}