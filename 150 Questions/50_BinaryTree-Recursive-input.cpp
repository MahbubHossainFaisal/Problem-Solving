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
    cout<<"Enter data: "<<endl;
    int rootData;
    cin>>rootData;
    if(rootData == -1) {
        return NULL;
    }
    BinaryTree<int>* root = new BinaryTree<int>(rootData);
    cout<<"Give left child data of : "<<root->data<<endl;
    BinaryTree<int>* left = takeInputBT();
    cout<<"Give right child data of : "<<root->data<<endl;
    BinaryTree<int>* right = takeInputBT();

    root->left = left;
    root->right = right;

    return root;
}

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

   BinaryTree<int> *root = takeInputBT();

    printBinaryTree(root);
    delete root;
}
