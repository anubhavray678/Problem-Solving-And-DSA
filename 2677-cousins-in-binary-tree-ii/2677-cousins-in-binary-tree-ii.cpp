/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* replaceValueInTree(TreeNode* root) {
        if (root == nullptr)
            return root;
        queue<TreeNode*> q;
        q.push(root);
        int previousLevelSum = root->val;

        while (!q.empty()) {
            int size = q.size();
            int levelSum = 0;
            for (int i = 0; i < size; ++i) {
                TreeNode* node = q.front();
                q.pop();
                node->val = previousLevelSum - node->val;

                int siblingSum =
                    (node->left != nullptr ? node->left->val : 0) +
                    (node->right != nullptr ? node->right->val : 0);

                if (node->left) {
                    levelSum += node->left->val;
                    node->left->val = siblingSum;
                    q.push(node->left);
                }
                if (node->right) {
                    levelSum += node->right->val;
                    node->right->val = siblingSum;
                    q.push(node->right);
                }
            }
            previousLevelSum = levelSum;
        }
        return root;
    }
};