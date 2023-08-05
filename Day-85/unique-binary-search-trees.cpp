//95. Unique Binary Search Trees II
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<TreeNode*> generateTrees(int n,int start=1) {
        
        //base case
        if(n<start){
            return {nullptr};
        }

        vector<TreeNode*> res;

        for(int i=start;i<=n;i++){
            for(auto leftSubTree:generateTrees(i-1,start)){
                for(auto rightSubTree:generateTrees(n,i+1)){
                    res.push_back(new TreeNode(i,leftSubTree,rightSubTree));
                }

            }
        }

        return res;

    }
};