// 从中序与后序遍历序列构造二叉树

/**
 * struct TreeNode {
 *	int val;
 *	struct TreeNode *left;
 *	struct TreeNode *right;
 *	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 * };
 */
class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     * 
     * @param inorder int整型vector 中序遍历序列
     * @param postorder int整型vector 后序遍历序列
     * @return TreeNode类
     */
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        // write code here
        if(inorder.size() == 0){
            return NULL;
        }
        TreeNode* root = new TreeNode(postorder[postorder.size() - 1]);
        int k =0;
        int left =0;
        int right=0;
        while(postorder[postorder.size() - 1] != inorder[k]){
            k++;
        }
        left = k;
        right = inorder.size() - 1 - k;
        
    }
};
