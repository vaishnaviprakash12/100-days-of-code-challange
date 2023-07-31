//2181. Merge Nodes in Between Zeros

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
    ListNode* mergeNodes(ListNode* head) {
        ListNode*temp=head;
        ListNode*newNode=new ListNode(-1);
        ListNode*dummy=newNode;
        int sum=0;
        temp=temp->next;
        while(temp!=NULL){
            if(temp->val==0){
             ListNode*res=new ListNode(sum);
            newNode->next=res;
             newNode=newNode->next;
             sum=0;
            }
            else{
                sum+=temp->val;
            }
            temp=temp->next;
        }

        return dummy->next;
    }
};