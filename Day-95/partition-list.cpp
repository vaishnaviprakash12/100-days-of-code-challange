//86.partition list
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
    ListNode* partition(ListNode* head, int x) {
ListNode*list1=new ListNode(0);
ListNode*list2=new ListNode(0);
ListNode*list1Head=list1;
ListNode*list2Head=list2;
while(head){
  if(head->val<x){
   list1Head->next=head;
   list1Head=list1Head->next;
  }
  else{
list2Head->next=head;
   list2Head=list2Head->next;
  }

    head=head->next;
}
list2Head->next=NULL;
list1Head->next=list2->next;

return list1->next;
    }
};