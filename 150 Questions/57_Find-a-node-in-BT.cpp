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

bool findNode(BinaryTree<int>* root,int key){
    if(root == NULL){
        return false;
    }
    if(root->data == key){
        return true;
    }

    return (findNode(root->left,key) || findNode(root->right,key));
}

int main(){

   BinaryTree<int> *root = takeInputBT();

    //printBinaryTree(root);

   cout<<"Enter value to find: "<<endl;
   int key;
   cin>>key;
   bool res = findNode(root,key);
   if(res){
    cout<<"Found!"<<endl;
   }
   else{
    cout<<"Not Found"<<endl;
   }
    delete root;
}
