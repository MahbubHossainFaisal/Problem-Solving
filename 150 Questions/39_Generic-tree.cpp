#include <bits/stdc++.h>
using namespace std;

template <typename T>
class TreeNode{
public:
    T data;
    vector<TreeNode<T>*> children;
    TreeNode(T data){
        this->data = data;
    }

};


void printTree(TreeNode<int>* root){
    if(root == NULL){
        return;
    }

    cout<<root->data<<": ";
    for(int i=0; i<root->children.size();i++){
        cout<<root->children[i]->data<<", ";
    }
    cout<<endl;

    for(int i=0; i<root->children.size();i++){
        printTree(root->children[i]);
    }

}

int main(){

    TreeNode<int>* root = new TreeNode<int>(1);
    TreeNode<int>* n1 = new TreeNode<int>(2);
    TreeNode<int>* n2 = new TreeNode<int>(3);
    TreeNode<int>* n3 = new TreeNode<int>(4);
    TreeNode<int>* n4 = new TreeNode<int>(5);
    TreeNode<int>* n5 = new TreeNode<int>(6);
    TreeNode<int>* n6 = new TreeNode<int>(7);

    root->children.push_back(n1);
    root->children.push_back(n2);

    n1->children.push_back(n3);
    n1->children.push_back(n4);
    n1->children.push_back(n5);

    n2->children.push_back(n6);

    printTree(root);

}