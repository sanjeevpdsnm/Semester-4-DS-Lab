#include <iostream>
#include <stack>
#define MAX 5
using namespace std;

class Stack{
    int arr[MAX];
    int top;
public:
    Stack() {
        top = -1;
    }
    void push(int val) {
        if(top == MAX - 1) {
            cout << "Stack is full." << endl;
        }
        top++;
        arr[top] = val;
    }

    void pop() {
        if(top == -1) {
            cout << "Stack is empty." << endl;
        }
        cout << arr[top] << " is Popped." << endl;
        top--;
    }

    void isempty() {
        if(top == -1) {
            cout << "Stack is empty." << endl;
        }
    }

    void isfull() {
        if(top == MAX - 1) {
            cout << "Stack is full.";
        }
    }

    void topE() {
        if(top == -1) {
            cout << "Stack is empty." << endl;
        }
        cout << "Top element is : " << arr[top] << endl;
    }

    void allElements() {
        if(top == -1) {
            cout << "Stack is empty." << endl;
        }
        for(int i = 0; i <= top; i++) {
            cout << arr[i] << " ";
        }
    }
};

int main() {
    Stack s;
    s.push(1);
    s.push(3);
    s.push(10);
    s.push(33);
    s.push(22);
    s.pop();
    s.topE();
    s.allElements();
}