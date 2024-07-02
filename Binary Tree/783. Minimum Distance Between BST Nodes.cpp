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

    void inOrder(TreeNode* root, vector<int> &ans){
        if(root == nullptr) return;
        inOrder(root->left, ans);
        ans.push_back(root->val);
        inOrder(root->right, ans);

    }

    int minDiffInBST(TreeNode* root) {
        vector<int> nums;
        inOrder(root, nums);
        int min = nums[1] - nums[0];
        for (int i=1;i < nums.size()-1; i++){
            if(nums[i+1] - nums[i] < min)
            min = nums[i+1] - nums[i];
        }
        return min;
       
      
        
    }
};