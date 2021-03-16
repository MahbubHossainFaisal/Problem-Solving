#include <bits/stdc++.h>
using namespace std;

#include "BinaryTreeClass.h"



BinaryTreeNode<int>* buildTreeHelper(int* in,int* pre, int inS,int inE,int preS,int preE)
{
    if(inS < inE){
        return NULL;
    }

    int rootData = pre[preS];
    int rootIndex=-1;
    for(int i=inS;i<=inE; i++)
    {
        if(in[i] == rootData)
        {
            rootIndex=i;
            break;
        }
    }
    int lPreS = preS+1;

    int lInS = inS ;
    int lInE = rootIndex-1;
    int lPreE = lInE-lInS+lPreS;
    int rPreS=lPreE+1;
    int rPreE = preE;
    int rInS = rootIndex+1;
    int rInE = inE;

    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);
    root->left=buildTreeHelper(in,pre,lInS,lInE,lPreS,lPreE);
    root->right=buildTreeHelper(in,pre,rInS,rInE,rPreS,rPreE);
    return root;
}

BinaryTreeNode<int>* buildTreeFromInPre(int *in, int *pre, int sz)
{
    return buildTreeHelper(in,pre,0,sz-1,0,sz-1);
}


void printBT(BinaryTreeNode<int>* root){

    if(root == NULL){
        return;
    }
    cout<<1<<endl;

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
//Binary Tree input : 1 2 3 4 5 -1 6 7 -1 8 9 10 11 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1
int main()
{
    int in[] = {4,2,5,1,8,6,9,3,7};
    int pre[] = {1,2,4,5,3,6,8,9,7};
    BinaryTreeNode<int>* root = buildTreeFromInPre(in,pre,9);

    printBT(root);

    delete root;
}
