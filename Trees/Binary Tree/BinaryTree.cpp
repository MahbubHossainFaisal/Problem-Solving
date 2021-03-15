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


void printBT(BinaryTreeNode<int>* root){

    if(root == NULL){
        return;
    }

    queue <BinaryTreeNode<int>*> pendingNodes;
    pendingNodes.push(root);

    while(!pendingNodes.empty()){
        BinaryTreeNode<int>* Front = pendingNodes.front();
        cout<<Front->data<<": ";
        pendingNodes.pop();
        if(Front->left){
            cout<<"Left child --->"<<Front->left->data<<" ";
            pendingNodes.push(Front->left);
        }
        if(Front->right){
             cout<<"Right child --->"<<Front->right->data<<" ";
             pendingNodes.push(Front->right);
        }
        cout<<endl;
    }


}

int numOfNodes(BinaryTreeNode<int>* root){
    if(root == NULL){
        return 0;
    }
    return 1 + numOfNodes(root->left) + numOfNodes(root->right);
}

//Binary Tree Traversals

void PreOrder(BinaryTreeNode <int>* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    PreOrder(root->left);
    PreOrder(root->right);

}

void PostOrder(BinaryTreeNode <int>* root){
    if(root==NULL){
        return;
    }

    PostOrder(root->left);

    PostOrder(root->right);
    cout<<root->data<<" ";

}

void InOrder(BinaryTreeNode <int>* root){
    if(root==NULL){
        return;
    }

    InOrder(root->left);
    cout<<root->data<<" ";
    InOrder(root->right);


}


//Binary Tree input : 1 2 3 4 5 -1 6 7 -1 8 9 10 11 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1
int main()
{
    BinaryTreeNode<int>* root = takeInputLevelWise();

    printBT(root);
    cout<<endl;
    cout<<"Number of nodes: "<<numOfNodes(root)<<endl;
    cout<<endl<<"Preorder Traversal : ";
    PreOrder(root);
     cout<<endl<<"Inorder Traversal : ";
    InOrder(root);
     cout<<endl<<"Postorder Traversal : ";
    PostOrder(root);

    delete root;
}
