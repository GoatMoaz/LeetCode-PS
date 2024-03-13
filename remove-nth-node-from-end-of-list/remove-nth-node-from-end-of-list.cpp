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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int size=0;
        ListNode* copy=head;
        while(copy){
            size++;
            copy=copy->next;
        }
        n=size-n;
        if(n==0){
            if(head->next){
                ListNode* del=head;
                head=head->next;
                delete del;
            }
            else
                return nullptr;
        }            
        else{
            ListNode* cur=head;
            for(int i=1 ; i< n && cur ; i++){
                cur=cur->next;
            }
            if(cur && cur->next){
                ListNode* del=cur->next;
                cur->next=del->next;
                delete del;
            }
        }
        return head;
        
    }
};