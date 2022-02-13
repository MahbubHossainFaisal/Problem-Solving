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
    TreeNode* construct(vector<int> inorder, vector<int> postorder, int inS,int inE, int postS,int postE){
        if(inS > inE) return NULL;
        
        int rootData = postorder[postE];
        int rootIndex = -1;
        for(int i=inS; i<=inE; i++){
            if(rootData == inorder[i]){
                rootIndex = i;
                break;
            }
        }
        
        int leftInS = inS;
        int leftInE = rootIndex - 1;
        int leftPostS = postS;
        int leftPostE = leftInE - leftInS + leftPostS;
        
        int rightInS = rootIndex + 1;
        int rightInE = inE;
        int rightPostS = leftPostE + 1;
        int rightPostE = postE - 1;
        
        TreeNode* root = new TreeNode(rootData);
        root->left = construct(inorder,postorder,leftInS,leftInE,leftPostS,leftPostE);
        root->right = construct(inorder,postorder,rightInS,rightInE,rightPostS,rightPostE);
        
        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int n = inorder.size();
        
       TreeNode* node = construct(inorder,postorder,0,n-1,0,n-1);
        return node;
    }
};