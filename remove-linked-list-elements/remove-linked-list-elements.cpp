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
    ListNode* removeElements(ListNode* head, int val) {
        if (!head || (!head->next && head->val != val))
            return head;
        while(head && head->val==val)
            head=head->next;
        if(!head)
            return nullptr;
        ListNode* copy=head;
        while (copy) {
            if(copy->next){
                if(copy->next->val==val)
                    copy->next=copy->next->next;
                else
                    copy=copy->next;
            } 
            else
                copy=copy->next;
        }
        return head;
    }
};