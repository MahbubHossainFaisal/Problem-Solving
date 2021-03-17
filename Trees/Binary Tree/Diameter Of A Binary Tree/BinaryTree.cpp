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

pair<int,int> heightDiameter(BinaryTreeNode<int>* root)
{
    if(root == NULL)
    {
        pair<int,int> p ;
        p.first=0;
        p.second=0;
        return p;
    }

    pair<int,int> leftAns = heightDiameter(root->left);
    pair<int,int> rightAns = heightDiameter(root->right);
    int leftHeight=leftAns.first;
    int leftDiameter= leftAns.second;
    int rightHeight = rightAns.first;
    int rightDiameter = rightAns.second;

    int height = 1+max(leftHeight,rightHeight);
    int diameter = max(leftHeight+rightHeight,max(leftDiameter,rightDiameter));

    pair<int,int> p;
    p.first=height;
    p.second= diameter;
    return p;
}


//Binary Tree input : 1 2 3 4 5 -1 6 7 -1 8 9 10 11 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1
int main()
{
    BinaryTreeNode<int>* root = takeInputLevelWise();

    //printBT(root);
    pair<int,int> p = heightDiameter(root);
    cout<<"Height of the tree :"<<endl;
    cout<<p.first<<endl;
    cout<<"Diamater of the tree: "<<endl;
    cout<<p.second<<endl;


    delete root;
}
