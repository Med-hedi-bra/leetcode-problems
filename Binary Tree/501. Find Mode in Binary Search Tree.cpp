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
    void dfs(TreeNode* root, map<int, int> &mp, int& mx){
        if(root){
            
            mp[root->val] = mp[root->val]+1;
            mx = max(mx, mp[root->val]);
            dfs(root->left,mp,mx);
            dfs(root->right,mp,mx); 
        }
    }
    

    vector<int> findMode(TreeNode* root) {
        map<int, int>mp;
        int mx = -1e9;
        dfs(root, mp,mx);
        vector<int> ans;

        for(const auto& [key, value]: mp){
            if(value == mx) ans.push_back(key);
        }
        return ans;
        
        
    }
};