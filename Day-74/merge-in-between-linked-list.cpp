//1669. Merge In Between Linked Lists
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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* p1=list1;
        ListNode*p2=list1;

        for(int i=0;i<a-1;i++){
            p1=p1->next;
        }
        for(int i=0;i<b;i++){
            p2=p2->next;
        }
        p1->next=list2;
        ListNode*temp=list2;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=p2->next;
        return list1;
    }
};