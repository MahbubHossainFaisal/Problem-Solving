#include <bits/stdc++.h>
using namespace std;

#include "TreeClass.h"
 static int realHeight=0 ;
 static int localHeight =1;

TreeNode<int>* takeInputLevelWise()
{
    int rootData;
    cout<<"Enter Root data: "<<endl;
    cin>>rootData;

    TreeNode<int>* root = new TreeNode<int>(rootData);
    queue<TreeNode<int>*> pendingNodes;
    pendingNodes.push(root);
    while(!pendingNodes.empty()){
        TreeNode<int>* Front = pendingNodes.front();
        pendingNodes.pop();
        int numOfChidren;
        cout<<"Enter the number of children of "<<Front->data<<endl;
        cin>>numOfChidren;

        for(int i=0;i<numOfChidren;i++){
            int childData;
            cout<<"Enter the "<<i+1<<"th child of "<<Front->data<<endl;
            cin>>childData;

            TreeNode<int>* child = new TreeNode<int>(childData);
            Front->children.push_back(child);
            pendingNodes.push(child);

        }
    }
    return root;
}

TreeNode<int>* takeInput(){
  int rootData;
  cout<<"Enter data: "<<endl;
  cin>>rootData;
  TreeNode<int>* root = new TreeNode<int>(rootData);
  int n;
  cout<<"Enter the number of children for "<<rootData<<endl;
  cin>>n;

  for(int i=0;i<n;i++){
    TreeNode<int>* child = takeInput();
    root->children.push_back(child);
  }
  return root;

}


void printTree( TreeNode<int>* root){
  if(root==NULL){
    return;
  }
  cout<<root->data<<":";
  for(int i=0;i<root->children.size();i++){
    cout<<root->children[i]->data;
    if(i+1 != root->children.size()){
      cout<<",";
    }
  }
  cout<<endl;
  for(int i=0;i<root->children.size();i++){
    printTree(root->children[i]);
  }
}
void printTreeLevelWise(TreeNode<int>* root){
    if(root==NULL){
        return;
    }
    queue <TreeNode<int>*> nodes;
    nodes.push(root);
    while(!nodes.empty()){
        TreeNode<int>* Front = nodes.front();
        nodes.pop();
        cout<<Front->data<<":";
        for(int i=0;i<Front->children.size();i++){
            cout<<Front->children[i]->data<<" ";
            nodes.push(Front->children[i]);
            if(i+1 != Front->children.size()){
                cout<<", ";
            }
        }
        cout<<endl;
    }

}

int numOfNodes(TreeNode<int>* root){
    if(root==NULL){
        return 0;
    }
    int ans=1;
    for(int i=0;i<root->children.size();i++){
        ans+=numOfNodes(root->children[i]);
    }
    return ans;
}

int heightOfTree(TreeNode<int>* root)
{
    if(root==NULL)
    {
        return 0;
    }
    if(root->children.size()==0){
        localHeight=1;
    }

    int recHeight=1;

    for(int i=0;i<root->children.size();i++){
        heightOfTree(root->children[i]);
        localHeight+=1;
        recHeight+=1;

        realHeight= max(localHeight,realHeight); //Something wrong in calculating height.Not getting the proper value.


    }


    return realHeight;
}

//same depth nodes
void NodesOfSameDepth(TreeNode<int>* root,int k)
{
    if(root==NULL){
        return;
    }
    if(k==0){
        cout<<root->data<<" ";
    }
    for(int i=0;i<root->children.size();i++){
        NodesOfSameDepth(root->children[i],k-1);
    }
}

void preOrder(TreeNode<int>* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
 for(int i=0;i<root->children.size();i++){
        preOrder(root->children[i]);
    }
}

void postOrder(TreeNode<int>* root){
    if(root==NULL){
        return;
    }

 for(int i=0;i<root->children.size();i++){
        postOrder(root->children[i]);

    }
    cout<<root->data<<" ";
}

//Tree nodes ----> 1 2 2 3 2 4 5 3 6 7 8 0 0 0 2 9 10 1 11 0 2 12 13 0 0 1 14 2 15 16 0 0
int main(){
 TreeNode<int>* root= takeInputLevelWise();
 printTreeLevelWise(root);

 cout<<endl<<"Number of nodes: "<<numOfNodes(root)<<endl;
 cout<<endl<<"Height of the Tree: "<<heightOfTree(root)<<endl;
 cout<<endl<<"Nodes in level/Depth 2: "<<endl;
 NodesOfSameDepth(root,2);
 cout<<endl;
 cout<<"PreOrder: "<<endl;
 preOrder(root);
 cout<<endl;
 cout<<"PostOrder: "<<endl;
 postOrder(root);
 cout<<endl;

 //Delete Tree;
 delete root;
}
