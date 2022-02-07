#include <bits/stdc++.h>
using namespace std;

template<typename T>

class BinaryTree{
public:
    T data;
    BinaryTree* left;
    BinaryTree* right;

    BinaryTree(T data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }

    ~BinaryTree(){
        delete this->left;
        delete this->right;
    }
};


BinaryTree<int>* takeInputBT(){
    cout<<"Enter data:"<<endl;
    int rootData ;
    cin>>rootData;
    BinaryTree<int>* root = new BinaryTree<int>(rootData);
    queue<BinaryTree<int>*> q;
    q.push(root);
    while(!q.empty()){
        BinaryTree<int>* front = q.front();
        q.pop();
        cout<<"Enter left child of "<<front->data<<endl;
        int lchild ;
        cin>>lchild;
        if(lchild != -1){
            BinaryTree<int>* node = new BinaryTree<int>(lchild);
            front->left = node;
            q.push(node);
        }
        cout<<"Enter right child of "<<front->data<<endl;
        int rchild ;
        cin>>rchild;
        if(rchild != -1){
            BinaryTree<int>* node = new BinaryTree<int>(rchild);
            front->right = node;
            q.push(node);
        }

    }

    return root;
}

int maxHeight(BinaryTree<int>* root){
    if(root == NULL){
        return 0;
    }
    int left = maxHeight(root->left);
    int right = maxHeight(root->right);

    return max(left,right) + 1;

}

int main(){

   BinaryTree<int> *root = takeInputBT();

    //printBinaryTree(root);
   int height = maxHeight(root);
   cout<<"height of binary tree: "<<height<<endl;

    delete root;
}
