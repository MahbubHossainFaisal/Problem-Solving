/* Balance Factor : Height of left subtree - Height of right subtree

    bf=hl-hr;
    bf= |hl-hr| <= 1 then the node is balanced.

    if( bf > 1 ) then the node is imbalance.



*/

#include <iostream>
using namespace std;

struct Node {
    struct Node *lchild;
    int data;
    int height;
    struct Node *rchild;
}*root=NULL;

int nodeHeight(struct Node *p)
{
    int hl,hr;
    hl=p && p->lchild? p->lchild->height : 0;
    hr=p && p->rchild? p->rchild->height : 0;
    return hl>hr? hl+1 : hr+1;
}

int balanceFactor(struct Node *p)
{
    int hl,hr;
    hl=p && p->lchild? p->lchild->height : 0;
    hr=p && p->rchild? p->rchild->height : 0;

    return hl-hr;
}

struct Node *LLRotation(struct Node *p)
{
    struct Node *pl=p->lchild;
    struct Node *plr=pl->rchild;

    pl->rchild=p;
    p->lchild=plr;
    p->height=nodeHeight(p);
    pl->height=nodeHeight(pl);
    if(root==p)
        root=pl;
    return pl;
}

struct Node *RInsert(struct Node *p,int key)
{
    struct Node *t=NULL;
    if(p==NULL){
        t=new Node;
        t->data=key;
        t->height=1;
        t->lchild=t->rchild=NULL;
        return t;
    }

    if(key < p->data){
        p->lchild=RInsert(p->lchild,key);
    }
    else if(key > p->data){
        p->rchild=RInsert(p->rchild,key);
    }
    p->height=nodeHeight(p);

    if(balanceFactor(p)==2 && balanceFactor(p->lchild)==1){
        return LLRotation(p);
    }
}

void inOrder(struct Node *p)
{
   if(p){

     inOrder(p->lchild);
     cout<<p->data<<" ";
     inOrder(p->rchild);
   }

}

int main()
{

    root=RInsert(root,10);
    RInsert(root,20);
    RInsert(root,5);
     RInsert(root,7);
      RInsert(root,2);
       RInsert(root,30);
       cout<<endl;
       inOrder(root);




}
