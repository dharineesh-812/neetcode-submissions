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
    void reorderList(ListNode* head) {
        if(head==NULL || head->next==NULL)
        return;
        ListNode *slow=head;
        ListNode *fast=head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
        }
        ListNode *second=slow->next;
        slow->next=NULL;
        ListNode *prev=NULL;
        ListNode *next=NULL;
        while(second){
            next=second->next;
            second->next=prev;
            prev=second;
            second=next;
        }
        second=prev;
        ListNode *first=head;
        while(second){
            ListNode *temp1=first->next;
            ListNode *temp2=second->next;

            first->next=second;
            second->next=temp1;

            first=temp1;
            second=temp2;

        }
    }
};
