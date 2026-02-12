// Doubly Linked List - Basic Operations
// Insert/Delete at Start and End

#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int data) {
        this->data = data;
        next = NULL;
        prev = NULL;
    }
};

Node* insertAtStart(Node* head, int val) {
    Node* newNode = new Node(val);

    if (!head) return newNode;

    newNode->next = head;
    head->prev = newNode;

    return newNode;
}

Node* insertAtEnd(Node* tail, int val) {
    Node* newNode = new Node(val);

    if (!tail) return newNode;

    tail->next = newNode;
    newNode->prev = tail;

    return newNode;
}

Node* deleteAtStart(Node* head) {
    if (!head) return NULL;

    Node* temp = head->next;

    if (temp) temp->prev = NULL;

    return temp;
}

Node* deleteAtEnd(Node* tail) {
    if (!tail) return NULL;

    Node* temp = tail->prev;

    if (temp) temp->next = NULL;

    return temp;
}

int main() {
    Node* head = new Node(5);
    Node* tail = head;

    head = insertAtStart(head, 4);
    head = insertAtStart(head, 3);
    head = insertAtStart(head, 2);

    tail = insertAtEnd(tail, 6);
    tail = insertAtEnd(tail, 7);
    tail = insertAtEnd(tail, 8);

    head = deleteAtStart(head);
    tail = deleteAtEnd(tail);

    Node* curr = head;

    while (curr) {
        cout << curr->data << " ";
        curr = curr->next;
    }

    return 0;
}
