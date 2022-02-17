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

bool getPath(BinaryTree<int>* root, int val, vector<int>& v){
    if(root == NULL) return false;

    v.push_back(root->data);
    if(root->data == val) return true;

    bool left = getPath(root->left,val,v);
    bool right = getPath(root->right, val, v);

    if(left or right) return true;
    v.pop_back();
    return false;
}


void rootToNodePath(BinaryTree<int>* root, int val){
    vector<int> v;
    if(getPath(root,val,v)){
        cout<<"Root to node paths are: "<<endl;
        cout<<"Start---";
        for(int i=0; i<v.size(); i++){
            cout<<v[i]<<"---";
        }
        cout<<"End"<<endl;

    }
    else{

        cout<<"Tree is empty!";
    }
}

int main(){

   BinaryTree<int> *root = takeInputBT();

    //printBinaryTree(root);
    cout<<"Give us the value to find: "<<endl;
    int val;
    cin>>val;
   rootToNodePath(root,val);
   return 0;
}
