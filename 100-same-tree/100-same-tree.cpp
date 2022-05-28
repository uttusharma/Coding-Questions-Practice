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
    
    void solve(TreeNode* root, vector<int> &v){
        if(root==NULL){
            v.push_back(NULL);
            return;
        }
        v.push_back(root->val);
        solve(root->left, v);
        solve(root->right, v);
    }
    
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(!p or !q) return p==q;
        vector<int> a,b;
        solve(p,a);
        solve(q,b);
        return(a==b);
    }
};