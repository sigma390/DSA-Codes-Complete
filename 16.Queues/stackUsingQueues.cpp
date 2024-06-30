#include <bits/stdc++.h>
using namespace std;

class Stack {
    queue<int> q1, q2;

public:
    // Push method
    // Always push into the non-empty queue
    void push(int x) {
        if (q1.empty()) {
            q2.push(x);
        } else {
            q1.push(x);
        }
    }

    // Pop operation
    void pop() {
        // Check which queue is empty and shift elements to the empty queue
        if (q1.empty()) {
            // Transfer elements from q2 to q1 until q2 has one element left
            while (q2.size() > 1) {
                q1.push(q2.front());
                q2.pop();
            }
            // Pop the last element from q2
            q2.pop();
        } else {
            // Transfer elements from q1 to q2 until q1 has one element left
            while (q1.size() > 1) {
                q2.push(q1.front());
                q1.pop();
            }
            // Pop the last element from q1
            q1.pop();
        }
    }

    // Top operation
    int top() {
        int front;
        if (q1.empty()) {
            // Transfer elements from q2 to q1 until q2 has one element left
            while (!q2.empty()) {
                front = q2.front();
                q2.pop();
                q1.push(front);
                if (q2.empty()) {
                    return front;
                }
            }
        } else {
            // Transfer elements from q1 to q2 until q1 has one element left
            while (!q1.empty()) {
                front = q1.front();
                q1.pop();
                q2.push(front);
                if (q1.empty()) {
                    return front;
                }
            }
        }
        return -1; // This should never be reached
    }

    // Empty method
    bool empty() {
        return q1.empty() && q2.empty();
    }
};

int main() {
    Stack s;
    s.push(1);
    s.push(2);
    s.pop();
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    s.pop();
    // Print all elements
    while (!s.empty()) {
        cout << s.top() << endl;
        s.pop();
    }
    return 0;
}
