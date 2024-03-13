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
    ListNode* oddEvenList(ListNode* head) {
        if(!head || !head->next || !head->next->next)
            return head;
        ListNode* evenHead=head->next;
        ListNode* oddNode=head;
        ListNode* evenNode=evenHead;
        while(oddNode->next && evenNode->next){
            oddNode->next=oddNode->next->next;
            oddNode=oddNode->next;
            evenNode->next = evenNode->next->next;
            evenNode=evenNode->next;
        }
        oddNode->next=evenHead;
        return head;
    }
};