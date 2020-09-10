#include<iostream>
using namespace std;
#include<queue>


struct Node
{
    int data;
    struct Node *lchild;
    struct Node *rchild;
}*root=NULL;

void Insert(int x)
{
    struct Node *t=root;
    struct Node *r,*p;
    //One pointer r is for pointing to t while traversing and
    // another one p is for creating nodes.
    if(root==NULL)
    {
        p=new Node;
        p->data=x;
        p->lchild=p->rchild=NULL;
        root=p;
        return;
    }
    while(t)
    {
        r=t; //while t will become null,that time r will point the last node address.
        if(x>t->data)
        {
            t=t->rchild; //t will move and point to it's right child
        }
        else if(x<t->data)
        {
            t=t->lchild;//t will move and point to it's left child
        }
        else
            return;

    }
    p=new Node;
    p->data=x;
    p->lchild=p->rchild=NULL;

    if(x>r->data) r->rchild=p; //connection of the new node with the last node

    if(x<r->data) r->lchild=p; //connection of the new node with the last node


}

Node *rInsert(struct Node *p,int x)
{ struct Node *t=NULL;
    if(!p){
        t=new Node;
        t->data=x;
        t->lchild=t->rchild=NULL;
        return t;

    }
 if(x<p->data) {
    p->lchild=rInsert(p->lchild,x);
 }
 else if(x>p->data){
    p->rchild=rInsert(p->rchild,x);
 }
 return  p;
}

 void inOrder(Node *p)
    {

        if(p)
        {
            inOrder(p->lchild);
            cout<<p->data<<" ";
            inOrder(p->rchild);
        }
    }




    int Height(Node *p)
    {
        int x=0,y=0;
        if(p==NULL)
            return 0;
        x=Height(p->lchild);
        y=Height(p->rchild);
        if(x>y)
            return x+1;
        else
            return y+1;
    }


     Node *inOrderPre(struct Node *p)
    {
        while(p && p->rchild)
            p=p->rchild;
        return p;
    }

      Node *inOrderSucc(struct Node *p)
    {
        while(p && p->lchild)
            p=p->lchild;
        return p;
    }




struct Node *Delete(struct Node *p,int x)
{
    struct Node *q;

    if(p==NULL)
    {
        return NULL;
    }
    if(!p->lchild && !p->rchild)
    {
        if(p==root)
            root=NULL;
        delete p;
        return NULL;
    }
        if(x<p->data)
        {
            p->lchild=Delete(p->lchild,x);
        }
        else if(x>p->data) {
             p->rchild=Delete(p->rchild,x);
        }
        //when key will be found!
        else {
            if(Height(p->lchild) > Height(p->rchild) )
            {
                q=inOrderPre(p->lchild);
                p->data=q->data;
                p->lchild=Delete(p->lchild,q->data);
            }
            else{
                q=inOrderSucc(p->rchild);
                p->data=q->data;
                p->rchild=Delete(p->rchild,q->data);
            }
        }
        return p;
}


int main()
{

    root=rInsert(root,10);
    rInsert(root,30);
    rInsert(root,20);
    rInsert(root,70);
    cout<<"Inorder: "<<endl;
    inOrder(root);
    Delete(root,10);
     cout<<endl<<"Inorder: "<<endl;
    inOrder(root);
    Delete(root,20);
     cout<<"Inorder: "<<endl;
    inOrder(root);
     Delete(root,70);
     cout<<"Inorder: "<<endl;
    inOrder(root);

}


