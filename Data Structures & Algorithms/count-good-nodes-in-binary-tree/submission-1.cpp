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

    void maxSofar(int maxsofar,TreeNode* node){
        if(!node) return;
        if(node->val>=maxsofar){
            maxsofar=node->val;
            good+=1;
        }
        maxSofar(maxsofar,node->left);
        maxSofar(maxsofar,node->right);

    }
    int goodNodes(TreeNode* root) {
        maxSofar(INT_MIN,root);
        return good;
    }
};
