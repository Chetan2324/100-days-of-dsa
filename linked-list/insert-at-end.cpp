// Insert Node at Tail (End) of Singly Linked List

#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

Node* insertAtTail(Node* head, int val) {
    Node* newNode = new Node(val);

    if (head == NULL)
        return newNode;

    Node* curr = head;

    while (curr->next != NULL) {
        curr = curr->next;
    }

    curr->next = newNode;

    return head;
}

int main() {
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);

    head = insertAtTail(head, 5);
    head = insertAtTail(head, 70);

    Node* curr = head;

    while (curr != NULL) {
        cout << curr->data << " ";
        curr = curr->next;
    }

    return 0;
}
