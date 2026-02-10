// LeetCode 328 - Odd Even Linked List
// https://leetcode.com/problems/odd-even-linked-list/

class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if (!head) return head;

        ListNode* evenHead = new ListNode(-1);
        ListNode* oddHead = head;

        ListNode* curr = head->next;

        ListNode* even = evenHead;
        ListNode* odd = oddHead;

        int index = 2;

        while (curr) {
            if (index % 2 == 0) {
                even->next = curr;
                even = even->next;
            } else {
                odd->next = curr;
                odd = odd->next;
            }
            curr = curr->next;
            index++;
        }

        odd->next = evenHead->next;
        even->next = NULL;

        return oddHead;
    }
};
