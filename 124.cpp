// 124. Binary Tree Maximum Path Sum

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
     int solve(TreeNode *root,int& maxi){
                if(!root) return 0;
            int l=max(0,solve(root->left,maxi));
            int r=max(0,solve(root->right,maxi));
            maxi=max(maxi,l+r+root->val);
            return root->val+max(l,r);
     }
        int maxPathSum(TreeNode* root) {
            int maxi=INT_MIN;
            if(!(root->left)&& !(root->right)) return root->val;
            solve(root,maxi);
            return maxi;
        }
    };