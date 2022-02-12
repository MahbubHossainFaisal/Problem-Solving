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
    TreeNode* construct(vector<int> preorder, vector<int> inorder, int preS,int preE,int inS, int inE){
        if(inS>inE){
            return NULL;
        }
        int rootData = preorder[preS];
        int rootIndex = -1;
        for(int i=inS; i<=inE; i++){
            if(inorder[i] == rootData){
                rootIndex = i;
                break;
            }
        }
        int leftInS = inS;
        int leftInE = rootIndex - 1;
        int leftPreS = preS+1;
        int leftPreE = leftPreS + leftInE - leftInS ;
       
        int rightInS = rootIndex + 1;
        int rightInE = inE;
        int rightPreS = leftPreE + 1;
        int rightPreE = preE;
       
        
        TreeNode* node = new TreeNode(rootData);
        node->left = construct(preorder,inorder,leftPreS,leftPreE,leftInS,leftInE);
        node->right = construct(preorder,inorder,rightPreS,rightPreE,rightInS,rightInE);
        
        return node;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n = preorder.size();
        TreeNode* node = construct(preorder,inorder,0,n-1,0,n-1);
        return node;
    }
};