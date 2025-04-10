// 103. Binary Tree Zigzag Level Order Traversal

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
        vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
            queue<TreeNode*> q;
            q.push(root);
            vector<vector<int>> ans;
            if(!root) return ans;
            int x=1;
            while(!q.empty()){
                vector<int> a;
                int n=q.size();
                for(int i=0;i<n;i++){
                    TreeNode* temp=q.front();
                    q.pop();
                    if(temp->left) q.push(temp->left);
                    if(temp->right) q.push(temp->right); 
                    a.push_back(temp->val);
                }
                ans.push_back(a);
            }
            for(auto& i:ans){
                if(x==1) {
                    x--;
                    continue;
                }
                else{
                    x++;
                    reverse(i.begin(),i.end());
                }
            }
            return ans;
        }
    };