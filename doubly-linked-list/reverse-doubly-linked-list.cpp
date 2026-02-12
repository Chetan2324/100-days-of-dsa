// GFG - Reverse a Doubly Linked List

class Solution {
public:
    Node *reverse(Node *head) {
        if (!head || !head->next)
            return head;

        Node* curr = head;
        Node* temp = NULL;

        while (curr) {
            temp = curr->prev;

            curr->prev = curr->next;
            curr->next = temp;

            curr = curr->prev;
        }

        return temp->prev;
    }
};
