// LeetCode 24 - Swap Nodes in Pairs
// https://leetcode.com/problems/swap-nodes-in-pairs/

class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if (head == NULL || head->next == NULL)
            return head;

        ListNode* curr = head;
        ListNode* prev = NULL;

        head = head->next;

        while (curr != NULL && curr->next != NULL) {
            ListNode* second = curr->next;

            curr->next = second->next;
            second->next = curr;

            if (prev != NULL)
                prev->next = second;

            prev = curr;
            curr = curr->next;
        }

        return head;
    }
};
