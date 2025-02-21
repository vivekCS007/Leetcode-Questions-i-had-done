// 1261. Find Elements in a Contaminated Binary Tree

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
class FindElements {
    public:
        TreeNode *a=NULL;
        void fill(TreeNode* b,int x){
            if(!b) return;
            b->val=x;
            if(b->left){
                fill(b->left,2*x+1);
            }
            if(b->right) fill(b->right,2*x+2);
        }
        FindElements(TreeNode* root) {
            a=root;
            int x=0;
            fill(a,x);
        }
        bool search(TreeNode* b,int x){
            if(!b) return false;
            if(b->val==x) return true;
            return (search(b->left,x)||search(b->right,x));
        }
        bool find(int target) {
            return search(a,target);
        }
    };
    
    /**
     * Your FindElements object will be instantiated and called as such:
     * FindElements* obj = new FindElements(root);
     * bool param_1 = obj->find(target);
     */