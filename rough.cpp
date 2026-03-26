#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node *next;
    Node(int val) {
        data = val;
        next = NULL;
    }
};

class LL {
    Node *head;
    Node *tail;
public:
    LL() {
        head = NULL;
        tail = NULL;
    }

    // Insert at beginning
    void push(int val) {
        Node *newNode = new Node(val);
        if (head == NULL) {
            head = tail = newNode;
        } else {
            newNode->next = head;
            head = newNode;
        }
    }

    // Insert at given position (0-based index)
    void insert(int val, int pos) {
        Node *newNode = new Node(val);

        if (pos == 0) { // insert at head
            newNode->next = head;
            head = newNode;
            if (tail == NULL) tail = newNode;
            return;
        }

        Node* temp = head;
        for (int i = 0; i < pos - 1 && temp != NULL; i++) {
            temp = temp->next;
        }

        if (temp == NULL) {
            cout << "Invalid Position." << endl;
            delete newNode;
            return;
        }

        newNode->next = temp->next;
        temp->next = newNode;
        if (newNode->next == NULL) tail = newNode; // update tail if inserted at end
    }

    // Delete node by value
    void deleteNode(int val) {
        if (head == NULL) {
            cout << "List is empty" << endl;
            return;
        }

        if (head->data == val) {
            Node* temp = head;
            head = head->next;
            if (head == NULL) tail = NULL; // list became empty
            delete temp;
            return;
        }

        Node* temp = head;
        while (temp->next != NULL && temp->next->data != val) {
            temp = temp->next;
        }

        if (temp->next == NULL) {
            cout << "Value not found" << endl;
            return;
        }

        Node* delNode = temp->next;
        temp->next = temp->next->next;
        if (temp->next == NULL) tail = temp; // update tail if last node deleted
        delete delNode;
    }

    // Display list
    void display() {
        Node* temp = head;
        cout << "Linked List: ";
        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main() {
    LL l;
    l.push(12);
    l.push(10);
    l.push(192);
    l.push(2);

    l.display();

    l.deleteNode(10);
    l.display();

    l.insert(99, 2);
    l.display();

    l.deleteNode(200); // not found
    l.display();

    return 0;
}