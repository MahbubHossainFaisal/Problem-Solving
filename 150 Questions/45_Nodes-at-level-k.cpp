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

int height(TreeNode<int>* root){
    if(root == NULL) return 0;

    int maxHeight = 0;

    for(int i=0; i<root->children.size();i++){
        int childHeight = height(root->children[i]);
        if(childHeight > maxHeight){
            maxHeight = childHeight;
        }
    }
    return 1 + maxHeight;
}


void printAtLevelK(TreeNode<int>* root, int k){
    if(root == NULL){
        return;
    }
    if(k==0){
        cout<<root->data<<endl;
        return;
    }

    for(int i=0; i<root->children.size(); i++){
        printAtLevelK(root->children[i], k-1);
    }
}
int main(){

    TreeNode<int>* root = createTree();
    cout<<"Nodes at level k are: "<<endl;

    printAtLevelK(root,3);

}
