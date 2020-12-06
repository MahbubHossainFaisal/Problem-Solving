#include<bits/stdc++.h>
using namespace std;


class Node
{
    public:
    int data;
    Node *lchild;
    Node *rchild;
};


class BinaryTree
{
public:
    Node *root;

    BinaryTree()
    {
        root=NULL;
    }
    void createTree()
    {
        Node *p,*t;
        int x;

        cout<<"Enter the root value: "<<endl;
        cin>>x;
        root=new Node;
        root->data=x;
        root->lchild=NULL;
        root->rchild=NULL;

        queue<Node*> q;
        q.push(root);

        while(!q.empty())
        {
            p=q.front();
            q.pop();

            cout<<"Enter the left child value of "<<p->data<<" :"<<endl;
            cin>>x;
            if(x!=-1){
                t=new Node;
                t->data=x;
                t->lchild = t->rchild = NULL;
                p->lchild=t;
                q.push(t);

            }
             cout<<"Enter the right child value of "<<p->data<<" :"<<endl;
            cin>>x;
            if(x!=-1){
                t=new Node;
                t->data=x;
                t->lchild = t->rchild = NULL;
                p->rchild=t;
                q.push(t);
            }
        }

    }

    int Height(Node *root)
    {
        int left,right;
        if(root==NULL){
            return 0;
        }
        left=Height(root->lchild);
        right=Height(root->rchild);

        if(left>right) return left+1;
        else return right+1;
    }

};



int main()
{
    BinaryTree bt;
    bt.createTree();

    int height= bt.Height(bt.root);
    cout<<"Height of the Binary Tree is : "<<height;


}
