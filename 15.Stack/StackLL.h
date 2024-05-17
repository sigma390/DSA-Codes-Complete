template< typename T>
class Stack;


template< typename T>
class Node{
    public:
        T data;
        Node<T> *next;

    //inityialise
    Node(T d){
        data = d;
    }
};


//class Stack 
template<typename T>
class Stack {

    Node<T> *head;
public:
    Stack(){
        head = nullptr;
        
    }
    // Push 
    void Push(T data){
        Node<T>* n = new Node<T>(data);
        n->next = head;
        head = n;

    }
    //check if empty
    bool isEmpty(){
        return head==nullptr;
    }
    //Top element

    T top(){
        return head->data;
    }


    //pop
    void Pop(){

        if (head!=nullptr)
        {
            Node <T> *temp = head;
            head = head->next;
          
            delete temp;
        }
        
       
    }


};
