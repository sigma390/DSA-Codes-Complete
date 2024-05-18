

class Queue
{
private:
    /* data */
    int *arr;
    int cs;
    int ms;
    int rear;
    int front;

public:
    Queue(int default_size = 5){
        ms = default_size;
        arr = new int[ms];
        cs = 0;
        rear = ms-1;
        front = 0;
    };
    //chek queue is full or not
    bool full(){
        return cs==ms;
    }
    //chek queue ios empty or not
    bool empty(){
        return cs==0;
    }
    //push element
    void push_rear(int d){
        if(!full()){
            rear = (rear+1)%ms;
            arr[rear] = d;
            cs++;
        }
    }
    //pop 
   void pop(){
    if (!empty())
    {
        front = (front+1)%ms;
        cs--;
    }
    
   }
   //get front element 
   int getfront(){
    return arr[front];
   }







};

