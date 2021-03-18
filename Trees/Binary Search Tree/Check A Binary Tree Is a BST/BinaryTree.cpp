#include <bits/stdc++.h>
using namespace std;

#include "BinaryTreeClass.h"

BinaryTreeNode<int>* takeInputLevelWise()
{
    int rootData;
    cout<<"Enter root data:"<<endl;
    cin>>rootData;
    if(rootData == -1){
        return NULL;
    }
    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);
    queue<BinaryTreeNode<int>*> pendingNodes;
    pendingNodes.push(root);

    while(!pendingNodes.empty()){
        BinaryTreeNode<int>* Front = pendingNodes.front();
        pendingNodes.pop();

        cout<<"Enter the left child of "<<Front->data<<" :"<<endl;
        int leftChildData;
        cin>>leftChildData;
        if(leftChildData != -1){
            BinaryTreeNode<int>* leftChild = new BinaryTreeNode<int>(leftChildData);
            Front->left = leftChild;
            pendingNodes.push(leftChild);
        }
        cout<<"Enter the right child of "<<Front->data<<" :"<<endl;
        int rightChildData;
        cin>>rightChildData;
        if(rightChildData != -1){
            BinaryTreeNode<int>* rightChild = new BinaryTreeNode<int>(rightChildData);
            Front->right = rightChild;
            pendingNodes.push(rightChild);
        }
    }
    return root;
}



/*
    How to check a Binary Tree is a Binary Search Tree or not?
    Answer is:
    --- We have to find the maximum data in the left subtree of the root
     and
    === minimum data in right subtree of the root

    if max data of left subtree is < root data
        &&
    if min data of right subtree is > root data


    Then there are two more condition
    left subtree must be a Binary Search tree of it's own
    and right subtree must be a Binary Search tree of it's own.

    So, these 4 conditions can make sure that the Binary Tree can be also called as a Binary Search Tree
*/

class BSTReturn {
    public:
    bool BST;
    int minimum;
    int maximum;
};

BSTReturn isBST(BinaryTreeNode<int>* root)
{
    if(root == NULL){
        BSTReturn temp;
        temp.BST = true;
        temp.minimum = INT_MAX;
        temp.maximum = INT_MIN;
        return temp;
    }

    BSTReturn leftOutput = isBST(root->left);
    BSTReturn rightOutput = isBST(root->right);

    int minimum = min(root->data,min(leftOutput.minimum,rightOutput.minimum));
    int maximum = max(root->data,max(leftOutput.maximum,rightOutput.maximum));

    bool isBSTFinal = (root->data > leftOutput.maximum) && (root->data < rightOutput.minimum) && (leftOutput.BST) && (rightOutput.BST);

    BSTReturn output ;
    output.BST = isBSTFinal;
    output.minimum = minimum;
    output.maximum = maximum;

    return output;
}



//Binary Tree input : 1 2 3 4 5 -1 6 7 -1 8 9 10 11 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1
//Binary Search Input : 10 5 20 4 8 15 22 -1 -1 -1 -1 -1 -1 -1 -1
int main()
{
    BinaryTreeNode<int>* root = takeInputLevelWise();

    BSTReturn answer = isBST(root);

    if(answer.BST){
        cout<<"Yes it is a binary search tree also"<<endl;
    }
    else{
        cout<<"It's not a binary search tree "<<endl;
    }

    delete root;
}
