/*
  给定一个非空特殊的二叉树，每个节点都是正数，并且每个节点的子节点数量只能为 2 或 0。如果一个节点有两个子节点的话，那么该节点的值等于两个子节点中较小的一个
  给出这样的一个二叉树，你需要输出所有节点中的 第二小的值 
  如果第二小的值不存在的话，输出 -1 。
*/

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
    int findSecondMinimumValue(TreeNode* root) { 
        return findBigger(root,root->val);
    }
    int findBigger(TreeNode* root,int val){
        if(root == nullptr){
            return -1;
        }
        if(root->val > val){
            return root->val;
        }
        // 找到左右子树中比val大一点的值
        int leftNum = findBigger(root -> left, val);
        int rightNum = findBigger(root -> right, val);
        // 如果都有大的，取小的
        if(leftNum > 0 && rightNum > 0) {
            return min(leftNum, rightNum);
        } 
        // 其他情况都取大
        return max(leftNum, rightNum);

    }
};


/*
  100. 相同的树
  给你两棵二叉树的根节点 p 和 q ，编写一个函数来检验这两棵树是否相同
  如果两个树在结构上相同，并且节点具有相同的值，则认为它们是相同的。
*/

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
        // 如果没有左右孩子，就返回真
        if(p == nullptr && q == nullptr){
            return true;
        }
        // 如果两棵树左右孩子都存在，并且其根节点的值都相等，继续判断他们的左孩子和有孩子，进行递归
        else if(q && p && q->val == p->val){
            return isSameTree(p->left,q->left) && isSameTree(p->right,q->right);
        }
        // 当其中一个为空，或者两个根节点的值不相等的时候，直接返回假
        else{
            return false;
        }
    }
};
