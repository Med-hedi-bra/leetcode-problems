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
    void build(TreeNode* root, vector<int> &ans){
        if(root){
            build(root->left, ans);
            ans.push_back(root->val);
            build(root->right, ans);
        }
    }
    bool findTarget(TreeNode* root, int k) {
        vector<int> ans;
        build(root, ans);
        int i=0,j=ans.size()-1;Big
        while(i<j){
            if(ans[i]+ans[j] == k)
            return 1;
            else if(ans[i] + ans[j] < k)
            i++;
            else
            j--;
        }
        return 0;
    }
};