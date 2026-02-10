// LeetCode 21 - Merge Two Sorted Lists
// https://leetcode.com/problems/merge-two-sorted-lists/

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* tempHead = new ListNode(-1);
        ListNode* curr = tempHead;

        ListNode* curr1 = list1;
        ListNode* curr2 = list2;

        while (curr1 && curr2) {
            if (curr1->val < curr2->val) {
                curr->next = curr1;
                curr1 = curr1->next;
            } else {
                curr->next = curr2;
                curr2 = curr2->next;
            }
            curr = curr->next;
        }

        while (curr1) {
            curr->next = curr1;
            curr = curr->next;
            curr1 = curr1->next;
        }

        while (curr2) {
            curr->next = curr2;
            curr = curr->next;
            curr2 = curr2->next;
        }

        return tempHead->next;
    }
};
