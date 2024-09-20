#include <bits/stdc++.h>
using namespace std;

class Node
{
private:
public:
    int data;
    Node *left;
    Node *right;
    // constructor
    Node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    };
};

// functional ApproaCH  ]

Node *buildTree()
{
    int d;
    cin >> d;
    // if d == -1 return null
    if (d == -1)
    {
        return NULL;
    }

    // create New node
    Node *newNode = new Node(d);
    // make Recursive Call on both sides
    newNode->left = buildTree();
    newNode->right = buildTree();

    return newNode;
}
void printPreorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    printPreorder(root->left);
    printPreorder(root->right);
}

void printInorder(Node *root)
{
    if (root == NULL)
        return;
    printInorder(root->left);
    cout << root->data << " ";
    printInorder(root->right);
}
void printPostorder(Node *root)
{
    if (root == NULL)
        return;
    printInorder(root->left);

    printInorder(root->right);
    cout << root->data << " ";
}

int main()
{
    // Build tree
    Node *root = buildTree();
    // print
    cout << "PreOrder is :" << endl;
    printPreorder(root);
    cout << "\nInOrder is :" << endl;
    printInorder(root);
    cout << "\nPostOrder is :" << endl;
    printPostorder(root);

    return 0;
}