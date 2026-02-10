// LeetCode 19 - Remove Nth Node From End of List
// https://leetcode.com/problems/remove-nth-node-from-end-of-list/

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int size = 0;
        ListNode* curr = head;

        // count length
        while (curr) {
            size++;
            curr = curr->next;
        }

        // remove head
        if (n == size) return head->next;

        curr = head;

        for (int i = 1; i < size - n; i++) {
            curr = curr->next;
        }

        curr->next = curr->next->next;

        return head;
    }
};
