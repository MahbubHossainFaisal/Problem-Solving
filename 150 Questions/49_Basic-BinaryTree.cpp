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


void printBinaryTree(BinaryTree<int> *root){
    if(root == NULL){
        return;
    }
    cout<<"Parent: "<<root->data<<endl;
    if(root->left){
    cout<<"Left child: "<<root->left->data<<endl;
    }
    if(root->right){
        cout<<"right child: "<<root->right->data<<endl;
    }

    printBinaryTree(root->left);
    printBinaryTree(root->right);
}

int main(){
    BinaryTree<int> *root = new BinaryTree<int>(1);
    BinaryTree<int> *n1 = new BinaryTree<int>(2);
    BinaryTree<int> *n2 = new BinaryTree<int>(3);

    root->left = n1;
    root->right = n2;

    printBinaryTree(root);
    delete root;
}