#include<bits/stdc++.h>
#include"list.h"
using namespace std;
 List l ;
void PrintLL(){

    //printer Function
    Node*head = l.begin();
    while (head!=NULL)
    {
        cout<<head->getData()<<"->";
        head = head->next;
    }
    


}

//Reverse LL

    void Rev(Node*&head){
        Node* c = head;
        Node*p = NULL;
        Node*N;
        while(c!=NULL){
            //save the next node
            N = c->next;
            c->next = p;

            //update p and c values
            p = c;
            c = N;
        }
        head = p;
    }

int main(){

   
  
    l.push_front(10);
    l.push_front(11);
    l.pus_back(12);
    l.Insert(123,1);
    cout<<l.Search(10)<<endl;
    cout<<l.recursiveSearch(10)<<endl;
    PrintLL();
    l.Pop_Front();
    PrintLL();
   
    Node *head = l.begin();
   Rev(head);
    PrintLL();

    


    return 0;
}