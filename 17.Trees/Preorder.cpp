#include<bits/stdc++.h>
using namespace std;


class Node
{
private:
    
public:
    int data;
    Node*left;
    Node*right;
    //constructor
    Node(int d ){
        data  = d;
        left = NULL;
        right = NULL;
    };
   
};

//functional ApproaCH  ]

Node* buildTree(){
    int d ;
    cin>>d;
    //if d == -1 return null
    if (d==-1)
    {
        return NULL;
    }
    


    //create New node
    Node *newNode = new Node(d);
    //make Recursive Call on both sides 
    newNode->left = buildTree();
    newNode->right = buildTree();

    return newNode;
}
void printPreorder(Node *root){
    if (root==NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    printPreorder(root->left);
    printPreorder(root->right);

    
}

int main()
{
    //Build tree
    Node * root = buildTree();
    //print
    printPreorder(root);


    return 0;
}