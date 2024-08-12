class Queue
{
private:
    int *arr;  // Pointer to the array that will store the queue elements
    int cs;    // Current size of the queue (number of elements in the queue)
    int ms;    // Maximum size of the queue (capacity of the queue)
    int rear;  // Index of the rear (end) of the queue
    int front; // Index of the front (beginning) of the queue

public:
    Queue(int default_size = 5)
    {
        ms = default_size; // Initialize maximum size of the queue
        arr = new int[ms]; // Allocate memory for the array
        cs = 0;            // Initialize current size to 0
        rear = ms - 1;     // Initialize rear to the last index of the array
        front = 0;         // Initialize front to the first index of the array
    }

    // Check if the queue is full
    bool full()
    {
        return cs == ms; // The queue is full if current size equals maximum size
    }

    // Check if the queue is empty
    bool empty()
    {
        return cs == 0; // The queue is empty if current size is 0
    }

    // Push element to the rear of the queue
    void push_rear(int d)
    {
        if (!full()) // Only push if the queue is not full
        {
            rear = (rear + 1) % ms; // Update rear index in a circular manner
            arr[rear] = d;          // Insert the element at the rear
            cs++;                   // Increment current size
        }
    }

    // Pop element from the front of the queue
    void pop()
    {
        if (!empty()) // Only pop if the queue is not empty
        {
            front = (front + 1) % ms; // Update front index in a circular manner
            cs--;                     // Decrement current size
        }
    }

    // Get the front element of the queue
    int getfront()
    {
        return arr[front]; // Return the element at the front index
    }
};
