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

vector<int>* nodesNeeded(BinaryTreeNode<int>* root,int data)
{
    if(root == NULL){
        return NULL;
    }

    if(root->data == data){
        vector<int>* output = new vector<int>();
        output->push_back(root->data);
        return output;
    }

    vector<int>* leftOutput = nodesNeeded(root->left,data);
    if(leftOutput!= NULL){
        leftOutput->push_back(root->data);
        return leftOutput;
    }

    vector<int>* rightOutput = nodesNeeded(root->right,data);
    if(rightOutput != NULL){
        rightOutput->push_back(root->data);
        return rightOutput;
    }
    else{
        return NULL;
    }
}





//Binary Tree input : 1 2 3 4 5 -1 6 7 -1 8 9 10 11 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1
int main()
{
    BinaryTreeNode<int>* root = takeInputLevelWise();

    vector<int>* output = nodesNeeded(root,10);
    for(int i=0;i<output->size();i++)
    {
        cout<<output->at(i)<<" ";
    }

    delete root;
}
