#include <bits/stdc++.h>
using namespace std;

#include "TreeClass.h";

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

int main(){
 TreeNode<int>* root= takeInput();
 printTree(root);
}
