class Solution {
public:
    int height(TreeNode* root) {
        if(root == NULL) return 0;

        int lh = height(root->left);
        int rh = height(root->right);

        return 1 + max(lh, rh);
    }

    bool isBalanced(TreeNode* root) {
        if(root == NULL) return true;

        int lh = height(root->left);
        int rh = height(root->right);

        if(abs(lh - rh) > 1)
            return false;

        if(!isBalanced(root->left))
            return false;

        if(!isBalanced(root->right))
            return false;

        return true;
    }
};