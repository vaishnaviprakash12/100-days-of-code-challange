//
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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode*curr=head;
        if(head==NULL||head->next==NULL){
            return head;
        }
        while(curr->next!=NULL){
            int a=curr->val;
            int b=curr->next->val;
            int ans =__gcd(a,b);
            ListNode*dummy=new ListNode(ans);
            ListNode*newVal=curr->next;
            curr->next=dummy;
            dummy->next=newVal;

            curr=newVal;
        }
        return head;
    }
};