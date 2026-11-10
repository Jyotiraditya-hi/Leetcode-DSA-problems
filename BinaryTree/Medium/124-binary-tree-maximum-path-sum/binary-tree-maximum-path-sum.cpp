class Solution {
public:
    int maxi = INT_MIN;

    int maxPath(TreeNode* root) {
        if(root == NULL) return 0;

        int lh = max(0, maxPath(root->left));
        int rh = max(0, maxPath(root->right));

        maxi = max(maxi, root->val + lh + rh);

        return root->val + max(lh, rh);
    }

    int maxPathSum(TreeNode* root) {
        maxPath(root);
        return maxi;
    }
};