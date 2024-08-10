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

// building a Tree
Node *build()
{
    int data;

    cin >> data;
    Node *newNode = new Node(data);
    if (data == -1)
        return nullptr;
    // make Recursive Call on both sides
    newNode->left = build();
    newNode->right = build();

    return newNode;
}
// Print Level order

void levelOrderPrint(Node *root)
{

    // queue of Type Node*
    queue<Node *> q;
    // satrting From top
    q.push(root);
    q.push(NULL);

    // check q is empty and do accordingly
    while (!q.empty())
    {
        Node *tmp = q.front();
        if (tmp == NULL)
        {

            cout << endl;
            q.pop();
            if (!q.empty())
            {
                /* code */
                q.push(NULL);
            }
        }
        else
        {
            q.pop();
            cout << tmp->data << " ";
            // push left and Right Children into Queue
            if (tmp->left)
                q.push(tmp->left);
            if (tmp->right)
                q.push(tmp->right);
        }
    }
    return;
}

int main()
{
    Node *root = build();
    levelOrderPrint(root);
}