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

TreeNode<int>* createTree(){
    int rootData;
    cout<<"Enter data: "<<endl;
    cin>>rootData;
    TreeNode<int>* root = new TreeNode<int>(rootData);
    cout<<"Enter the number of children for :"<<rootData<<endl;
    int n;
    cin>>n;

    for(int i=1; i<=n; i++){
        TreeNode<int>* child = createTree();
        root->children.push_back(child);
    }
    return root;

}

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

    TreeNode<int>* root = createTree();
    printTree(root);

}
