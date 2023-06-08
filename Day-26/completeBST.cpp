//check completeness of BST
class Solution {
public:
    int countNodes(TreeNode*root){
        if(root==NULL){
            return 0;
        }
      int ans=1+countNodes(root->left)+countNodes(root->right);
      return ans;
    }
    bool isCBT(TreeNode*root,int index,int cnt){
        if(root==NULL) return true;
        if(index>=cnt){
            return false;
        }
        else{
            bool left=isCBT(root->left,2*index+1,cnt);
            bool right=isCBT(root->right,2*index+2,cnt);
            return left&&right;
        }
        
    }
    bool isCompleteTree(TreeNode* root) {
        int index=0;
        int totalNodes=countNodes(root);
        if(isCBT(root,index,totalNodes)){
            return true;
        }
        else{
            return false;
        }
    }
};