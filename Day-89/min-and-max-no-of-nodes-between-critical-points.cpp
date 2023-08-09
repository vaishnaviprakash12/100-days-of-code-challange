//2058. Find the Minimum and Maximum Number of Nodes Between Critical Points
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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        ListNode*prev=head;
        ListNode*curr=head->next;
        ListNode*ahead=head->next->next;
        int i=0;
        vector<int>v;
        while(curr->next!=NULL){
            if(prev->val>curr->val&&curr->val<ahead->val){
                //local minima at i;
                v.push_back(i);
            }

            else if (prev->val<curr->val&&curr->val>ahead->val){
                //local maxima at i;
                v.push_back(i);
            }
            prev=prev->next;
            curr=curr->next;
            ahead=ahead->next;
            i++;
        }
        if(v.size()<2){
            return {-1,-1};
        }
        int mini=INT_MAX;
        for(int i =1;i<v.size();i++){
            int diff=v[i]-v[i-1];
            mini=min(diff,mini);
        }
        return {mini,v[v.size()-1]-v[0]};
    }
};