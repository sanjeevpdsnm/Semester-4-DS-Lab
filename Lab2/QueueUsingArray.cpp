#include <iostream>
#include <queue>
#define MAX 5
using namespace std;

class Queue {
    int arr[MAX];
    int front;
    int rear;

public:
    Queue() {
        front = -1;
        rear = -1;
    }

    void enqueue(int val) {
        if(rear == MAX - 1) {
            cout << "Queue is Full." << endl;
        }
        if(front == -1) {
            front = 0;
        }
        rear++;
        arr[rear] = val;
    }

    void dequeue() {
        if(front == -1 || front > rear) {
            cout << "Queue is empty." << endl;
        }
        cout << arr[front] << " is popped." << endl;
        front++;
    }

    void allElements() {
        if(front == -1 || front > rear) {
            cout << "Queue is empty." << endl;
        }
        cout << "Elements are : ";
        for(int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
    }

};

int main() {
    Queue q;
    q.enqueue(4);
    q.enqueue(5);
    q.enqueue(6);
    q.enqueue(19);
    q.enqueue(10);
    q.dequeue();
    q.allElements();
    return 0;
}