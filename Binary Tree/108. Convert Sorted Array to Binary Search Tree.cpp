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
    void build(TreeNode* root, int i, int j, vector<int> &nums ){
        if(i>j)
        return ;
        int mid = (i+j)/2;
        root = new TreeNode(nums[mid]);
        build(root->left,i,mid-1,nums);
        build(root->right,mid+1,j,nums);
        

    }

    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int mid, i=0,j=nums.size();
        TreeNode *ans;
        build(ans,i,j,nums);
        return ans;
    }
};