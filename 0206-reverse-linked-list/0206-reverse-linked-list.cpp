/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* copy=nullptr;
        if (!head || !head->next)
            return head;
        while(head){
            ListNode* next=head->next;
            head->next=copy;
            copy=head;
            head=next;
        }
        return copy;
    }
};