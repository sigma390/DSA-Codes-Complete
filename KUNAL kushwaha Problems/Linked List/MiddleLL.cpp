

#include<bits/stdc++.h>
#include"list.h"
using namespace std;

List myList;
Node* Middle(Node *head){
    if(head==nullptr){
        return nullptr;
    }
    //count total nodes 
    int cnt {0};
    Node *curr = head;
    while(curr!=nullptr){
            cnt++;
            curr= curr->next;
        }
    //find middle index;
        int m = cnt/2;
        curr = head;
        //find middle
         for(int i=0;i<m;i++){
            curr = curr->next;
         }

         return curr;   
        



}   




int main() {
 
    int n, data;

    cout << "Enter the number of elements you want to add to the list: ";
    cin >> n;
    //making a LL

    for (int i = 0; i < n; ++i) {
        cout << "Enter data for element " << (i + 1) << ": ";
        cin >> data;
        myList.pus_back(data);
    }
    //Printing LL
    cout << "The elements in the list are: ";
    for (Node* node = myList.begin(); node != nullptr; node = node->next) {
        cout << node->getData() << " ";
    }
    cout << endl;
    Node *head = myList.begin();
    Node*newHead = Middle(head);
    cout<<newHead->getData();

    return 0;
}