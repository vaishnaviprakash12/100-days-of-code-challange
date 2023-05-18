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
    ListNode*reverseList(ListNode*head){
        ListNode*prevptr=NULL;
        ListNode*currptr=head;
        ListNode*nextptr=NULL;
        while(currptr!=NULL){
            nextptr=currptr->next;
            currptr->next=prevptr;
            prevptr=currptr;
            currptr=nextptr;

        }
        return prevptr;
    }
    int pairSum(ListNode* head) {
        ListNode*slow=head;
        ListNode*fast=head->next;
        while(fast!=NULL&&fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
        }
        ListNode*newHead=slow->next;
        slow->next=NULL;
         newHead=reverseList(newHead);
        int ans=0;
        while(head&&newHead){
          ans=max(ans,head->val+newHead->val);
          head=head->next;
          newHead=newHead->next;
        }
        return ans;
    }
};