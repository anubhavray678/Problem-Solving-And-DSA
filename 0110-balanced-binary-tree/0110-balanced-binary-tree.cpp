class Solution {

public:
    bool isBalanced(TreeNode* root) {
        if(root==nullptr)return true;
        int leftBal = height(root->left);
        int rightBal = height(root->right);
        if(abs(leftBal - rightBal) <= 1 && isBalanced(root->left) && 
        isBalanced(root->right)) return true;
        return false;
    } 

    int height(TreeNode* root)
    {
        if(root == nullptr) return 0;
        int leftHeight = height(root->left );
        int rightHeight = height(root->right);
        return 1+ max(leftHeight , rightHeight);
    }
};