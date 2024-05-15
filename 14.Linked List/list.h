#include <iostream>
class List;
class Node {
    int data;
    

public:
    Node* next;
    Node(int d) : data(d), next(nullptr) {}
    int getData(){
        return data;
    }

    friend class List;
};

class List {
    Node* head;
    Node* tail;



    int searchHelper(Node *start, int k){
        //base 
        if(start==NULL){
            return -1;
        }
        //normal
        if(start->data==k){
            return 0;
        }
        //recursive case
        int idxx = searchHelper(start->next, k);
        if(idxx==-1){
            return -1;

        }
        else{
            return idxx+1;
        }



    }

public:
    List() : head(nullptr), tail(nullptr) {}
    Node *begin(){
        return head;
    }
    //destructor down below
    ~List() {
        while (head != nullptr) {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }

    // Push front
    void push_front(int data) {
        if (head == nullptr) {
            Node* n = new Node(data);
            head = tail = n;
        } else {
            Node* n = new Node(data);
            n->next = head;
            head = n;
        }
    }


    //push back 
    void pus_back(int data){
        if (head == nullptr) {
            Node* n = new Node(data);
            head = tail = n;}
        else{
            Node * n = new Node(data);
            tail->next  = n;
            tail = n;
        }
    }
    //Insert at a Position
    void Insert(int data, int pos){
        if (pos==0)
        {
            push_front(data);
            return;
        }
        else{
            Node* temp = head; //start from head
            for (int i = 1; i <= pos-1; i++)
            {
                temp = temp->next;
            }
            
            Node * n = new Node(data);
            n->next = temp->next;
            temp->next = n;
            
        }   
    }

    //normal search
    int Search(int k){
        Node * tmp = head;
        int idx = 0;
        //iterate 
        while (tmp!=NULL){
            if(tmp->data==k){
                return idx;
            }
            idx++;
            tmp = tmp->next;
        }
        return -1;
        

    }

    int recursiveSearch(int k){
        int idx = searchHelper(head, k);
        return idx
;    }




};
