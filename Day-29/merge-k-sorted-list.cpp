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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
       priority_queue<int,vector<int>,greater<int>>pq;
       for(auto it:lists){
           while(it){
               pq.push(it->val);
               it=it->next;
           }
       }
       ListNode*head=new ListNode;
       if(!pq.empty()){
           head->val=pq.top();
           pq.pop();
       }
       else{
           return NULL;
       }
       auto ans =head;
       while(!pq.empty()){
           ListNode*t=new ListNode;
           t->val=pq.top();
           pq.pop();
           head->next=t;
           head=t;
        }
        return ans;
    }
};