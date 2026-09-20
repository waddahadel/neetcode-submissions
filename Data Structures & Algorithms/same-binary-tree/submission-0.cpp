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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        
        // if both are empty we return true cause they are equal
        if(!p && !q) return true;
        else if(!p && q) return false;
        else if(p && !q) return false;

        // otherwise we compare each value and do the same for the left and right
        return isSameTree(p->left,q->left) && (p->val == q->val) && isSameTree(p->right,q->right);

    }
};
