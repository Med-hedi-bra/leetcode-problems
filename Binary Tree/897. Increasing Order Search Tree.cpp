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
    void inOrder(TreeNode* root, vector<int> &arr){

        if(root->left)
        inOrder(root->left,arr);
        arr.push_back(root->val);
        if(root->right)
        inOrder(root->right,arr);        
    }
    TreeNode* increasingBST(TreeNode* root) {
        vector<int> arr;
        inOrder(root, arr);
        TreeNode *temp, *fake= new TreeNode(-1);
        temp = fake;
        for(auto itm:arr){
            TreeNode* t = new TreeNode(itm);
            temp->right = t;
            temp = t;
        }
        return fake->right;

    }
};