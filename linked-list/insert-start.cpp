// Insert Node at Head (Beginning) of Singly Linked List

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

Node* insertAtHead(Node* head, int val) {
    Node* newHead = new Node(val);
    newHead->next = head;
    return newHead;
}

int main() {
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);

    head = insertAtHead(head, 5);
    head = insertAtHead(head, 70);

    Node* curr = head;

    while (curr != NULL) {
        cout << curr->data << " ";
        curr = curr->next;
    }

    return 0;
}
