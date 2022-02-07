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

void printBinaryTree(BinaryTree<int> *root){
    if(root == NULL){
        return;
    }
    queue<BinaryTree<int>*> q;
    cout<<root->data<<" ";
    q.push(root);

    while(!q.empty()){
        BinaryTree<int> *f = q.front();
        q.pop();
        if(f->left){
            q.push(f->left);
            cout<<f->left->data<<" ";
        }
        if(f->right){
            q.push(f->right);
            cout<<f->right->data<<" ";
        }
    }
}

void preOrderTraversal(BinaryTree<int>* root){
    if(root == NULL){
        return ;
    }

    cout<<root->data<<" ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

void inOrderTraversal(BinaryTree<int>* root){
    if(root == NULL){
        return ;
    }


    inOrderTraversal(root->left);
    cout<<root->data<<" ";
    inOrderTraversal(root->right);
}

void postOrderTraversal(BinaryTree<int>* root){
    if(root == NULL){
        return ;
    }


    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout<<root->data<<" ";
}

int main(){

   BinaryTree<int> *root = takeInputBT();

    //printBinaryTree(root);
   cout<<"Pre order:  "<<endl;
   preOrderTraversal(root);
   cout<<endl;
   cout<<"In order:  "<<endl;
   inOrderTraversal(root);
   cout<<endl;
   cout<<"Post order:  "<<endl;
   postOrderTraversal(root);
   cout<<endl;

    delete root;
}
