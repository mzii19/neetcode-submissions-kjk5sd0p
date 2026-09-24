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
    int good=0;
    void max_num(int maxsofar,TreeNode* node){
        if(!node) return;
        if(node->val>=maxsofar){
            maxsofar=node->val;
            good+=1;
        }
        max_num(maxsofar,node->left);
        max_num(maxsofar,node->right);
    }
    int goodNodes(TreeNode* root) {
        max_num(INT_MIN,root);
        return good;

    }
};
