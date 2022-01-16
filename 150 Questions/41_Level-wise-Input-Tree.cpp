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
    cout<<"Enter root data: "<<endl;
    cin>>rootData;
    TreeNode<int>* root = new TreeNode<int>(rootData);

    queue<TreeNode<int>*> q;
    q.push(root);

    while(!q.empty()){
        TreeNode<int>* front = q.front();
         q.pop();
        cout<<"Enter the number of children for "<<front->data<<" "<<endl;

        int childrenNumber;
        cin>>childrenNumber;
        for(int i=1; i<=childrenNumber; i++){
            int childData;
            cin>>childData;
            TreeNode<int>* child = new TreeNode<int>(childData);
            front->children.push_back(child);
            q.push(child);
        }
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
