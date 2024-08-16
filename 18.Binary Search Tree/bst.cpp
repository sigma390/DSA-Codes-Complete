#include <bits/stdc++.h> // Includes all standard C++ libraries for ease of use
using namespace std;

// Class representing a node in the Binary Search Tree (BST)
class Node
{
public:
    int key;     // Data value of the node
    Node *left;  // Pointer to the left child
    Node *right; // Pointer to the right child

    // Constructor to initialize a node with a given key
    Node(int d) : key(d), left(nullptr), right(nullptr) {}
};

// Function to insert a new key into the BST
Node *insert(Node *root, int key)
{
    // Base Case: If the tree is empty or we've reached a null child, create a new node
    if (root == NULL)
    {
        return new Node(key); // Create and return a new node with the given key
    }

    // Recursive Case: Decide whether to go left or right in the tree
    if (key < root->key)
    {
        // If the key to be inserted is less than the current node's key, insert in the left subtree
        root->left = insert(root->left, key);
    }
    else
    {
        // If the key to be inserted is greater than or equal to the current node's key, insert in the right subtree
        root->right = insert(root->right, key);
    }

    // Return the unchanged root pointer
    return root;
}

// Function to perform in-order traversal of the BST and print each node's key
void printInOrder(Node *root)
{
    // Base Case: If the current node is null, do nothing (return)
    if (root == NULL)
        return;

    // Recursive Case: Traverse the left subtree, then visit the current node, then traverse the right subtree
    printInOrder(root->left);  // Recursively visit left child
    cout << root->key << " ";  // Print the current node's key
    printInOrder(root->right); // Recursively visit right child
}

// Function to search for a given key in the BST
bool search(Node *root, int key)
{
    // Base Case: If the current node is null, the key is not found
    if (root == NULL)
        return false;

    // If the current node's key matches the search key, return true
    if (root->key == key)
        return true;

    // Recursive Case: Search in the left or right subtree depending on the key
    if (key < root->key)
    {
        // If the search key is less than the current node's key, search in the left subtree
        return search(root->left, key);
    }
    else
    {
        // If the search key is greater than the current node's key, search in the right subtree
        return search(root->right, key);
    }
}

// Helper function to find the node with the minimum key in a subtree
Node *minVal(Node *root)
{
    // Move to the leftmost node (smallest key in the subtree)
    while (root->left != NULL)
    {
        root = root->left;
    }
    return root; // Return the node with the minimum key
}

// Function to remove a node with a given key from the BST
Node *remove(Node *root, int key)
{
    // Base Case: If the tree is empty or the node is not found, return null
    if (root == NULL)
        return NULL;

    // Recursive Case: Search for the node to be deleted in the left or right subtree
    if (key < root->key)
    {
        // If the key to be deleted is less than the current node's key, go to the left subtree
        root->left = remove(root->left, key);
    }
    else if (key > root->key)
    {
        // If the key to be deleted is greater than the current node's key, go to the right subtree
        root->right = remove(root->right, key);
    }
    else
    {
        // Node to be deleted is found

        // Case 1: Node with no children (leaf node)
        if (root->left == NULL && root->right == NULL)
        {
            delete root; // Delete the node
            root = NULL; // Set root to null since it's a leaf node
        }
        // Case 2: Node with one child (right child)
        else if (root->left == NULL)
        {
            Node *temp = root;  // Temporarily store the current node
            root = root->right; // Replace the current node with its right child
            delete temp;        // Delete the original node
        }
        // Case 2: Node with one child (left child)
        else if (root->right == NULL)
        {
            Node *temp = root; // Temporarily store the current node
            root = root->left; // Replace the current node with its left child
            delete temp;       // Delete the original node
        }
        // Case 3: Node with two children
        else
        {
            // Find the in-order successor (smallest node in the right subtree)
            Node *temp = minVal(root->right);

            // Copy the in-order successor's key to the current node
            root->key = temp->key;

            // Delete the in-order successor from the right subtree
            root->right = remove(root->right, temp->key);
        }
    }

    // Return the root pointer (updated tree)
    return root;
}

// Print Elements in A given Range
void printInRange(Node *root, int k1, int k2)
{
    // base case that is Root is null
    if (root == NULL)
        return;

    // if key is in between then we gonna find on left as well as Right and Print that Key
    if (root->key > k1 and root->key < k2)
    {
        // check on left also we may find elements
        printInRange(root->left, k1, k2);
        cout << root->key << " ,";         // print current key ;
        printInRange(root->right, k1, k2); // check on right also
    }
    else if (root->key < k1)
    {
        printInRange(root->right, k1, k2);
    }
    else
    {
        printInRange(root->left, k1, k2);
    }
}

int main()
{
    Node *root = NULL; // Initialize an empty BST

    // Array of keys to insert into the BST
    int a[] = {8, 3, 10, 1, 6, 14, 4, 7, 13};

    // Insert each key from the array into the BST
    for (auto x : a)
    {
        root = insert(root, x);
    }

    // // Print the in-order traversal of the BST (should print keys in sorted order)
    // printInOrder(root);
    // cout << endl; // Newline for better output formatting

    // // Search for a key (e.g., 22) in the BST and print whether it's found (1 for true, 0 for false)
    // cout << search(root, 22) << endl;

    // // Delete a key (e.g., 10) from the BST
    // root = remove(root, 10);

    // // Print the in-order traversal of the BST after deletion
    // printInOrder(root);
    // cout << endl;

    printInRange(root, 5, 12);

    return 0; // Return 0 to indicate successful execution
}
