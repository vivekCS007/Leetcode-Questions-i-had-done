// 102. Binary Tree Level Order Traversal

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
typedef TreeNode node;
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        int flag=1;
        queue<TreeNode*> q;
        if(!root) return ans;
        q.push(root);
        while(flag){
            flag=0;
            int n=q.size();
            vector<int> v;
            for(int i=0;i<n;i++){
                TreeNode* a=q.front();
                if(a->left){
                    q.push(a->left);
                    flag=1;
                }
                if(a->right){
                    q.push(a->right);
                    flag=1;
                }
                v.push_back(a->val);
                q.pop();
            }
            ans.push_back(v);
        }
        return ans;
    }
};