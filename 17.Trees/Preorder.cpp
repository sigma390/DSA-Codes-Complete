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
    ~Node();
};

//functional ApproaCH  ]

Node* buildTree(){
    int d ;
    cin>>d;
    //create New node
    Node *newNode = new Node(d);
    //make Recursive Call on both sides 
    newNode->left = buildTree();
    newNode->right = buildTree();

    return newNode;
}


int main()
{


    return 0;
}