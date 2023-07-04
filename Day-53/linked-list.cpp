//817. Linked List Components
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
    int numComponents(ListNode* head, vector<int>& nums) {
        if(head==NULL){
            return 0;
        }
        int count=0;
        unordered_set<int>st(nums.begin(),nums.end());
        while(head!=NULL){
          if(st.find(head->val)!=st.end()) {
            count++;
            while(head->next!=NULL&&st.find(head->next->val)!=st.end()){
                head=head->next;
            }
     
          }
          head=head->next;
        }
        return count;
    }
};