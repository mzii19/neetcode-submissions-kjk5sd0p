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
    bool check_subroot(TreeNode* root,TreeNode* subRoot){
        if(root==nullptr && subRoot==nullptr){
            return true;
        }
        if(root==nullptr || subRoot==nullptr){
            return false;
        }
        
        if(root->val!=subRoot->val){
            return false;
        }

        bool leftDepth=check_subroot(root->left,subRoot->left);
        bool rightDepth=check_subroot(root->right,subRoot->right);

        return leftDepth && rightDepth;
    }
    
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(root==nullptr) return false;
        if(check_subroot(root,subRoot)) return true;

        return isSubtree(root->left,subRoot)||isSubtree(root->right,subRoot);

    }
};
