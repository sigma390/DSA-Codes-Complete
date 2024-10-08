#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int d) : data(d), left(nullptr), right(nullptr) {}
};

// Building a Tree (Recursive Method)
Node *build()
{
    int data;
    cin >> data;
    if (data == -1)
        return nullptr;

    Node *newNode = new Node(data);
    newNode->left = build();
    newNode->right = build();

    return newNode;
}

// Print Level Order
void levelOrderPrint(Node *root)
{
    if (!root)
        return; // Handle case where root is nullptr

    queue<Node *> q;
    q.push(root);
    q.push(nullptr); // Marker for end of level

    while (!q.empty())
    {
        Node *tmp = q.front();
        q.pop();

        if (tmp == nullptr)
        {
            cout << endl;
            if (!q.empty())
                q.push(nullptr); // Add marker for next level
        }
        else
        {
            cout << tmp->data << " ";
            if (tmp->left)
                q.push(tmp->left);
            if (tmp->right)
                q.push(tmp->right);
        }
    }
}

// Build Tree Using Level Order Input
Node *build_level()
{
    int d;
    cin >> d;
    if (d == -1)
        return nullptr;

    Node *root = new Node(d);
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *curr = q.front();
        q.pop();

        int c1, c2; // children of current
        cin >> c1 >> c2;

        if (c1 != -1)
        {
            curr->left = new Node(c1);
            q.push(curr->left);
        }
        if (c2 != -1)
        {
            curr->right = new Node(c2);
            q.push(curr->right);
        }
    }
    return root;
}

// Calculate Height Of tree
int heightOfTree(Node *root)
{
    if (root == NULL)
        return 0;
    // calculate ledt and Right heights recur
    int h1 = heightOfTree(root->left);
    int h2 = heightOfTree(root->right);
    return max(h1, h2) + 1;
}

// Diamter of tree

int diameterOfTree(Node *root)
{
    if (root == NULL)
        return 0;

    int d1 = heightOfTree(root->left) + heightOfTree(root->right); // height at each Node

    int d2 = diameterOfTree(root->left);  // left diameter Recursive Caall
    int d3 = diameterOfTree(root->right); // right diameter Recursive Caall

    return max(d1, max(d2, d3));
}

int main()
{
    // Choose one of the following methods to build the tree
    // Node *root = build();       // Recursive method
    Node *root = build_level(); // Level order method

    levelOrderPrint(root);
    cout << heightOfTree(root) << endl;

    // In a real application, consider adding code to delete the tree to avoid memory leaks
    return 0;
}
