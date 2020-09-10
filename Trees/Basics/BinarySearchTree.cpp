/* Binary Search Tree:

Binary search tree is made like this that there will be a root node ,
left node data of the root node will be smaller than root data,
right node data of the root node will be greater than root node.
Same condition for every parent-child nodes also.
Parent's left child  node's data will be smaller than parent node data
and parent's right child node's data will be greater than parent node data.
using this condition the binary search tree will be formed.

properties:

1.No duplicates in the tree
2.If we do inorder ,then the result will be sorted.
3.For n nodes, (2nCn)/n+1 trees can be generated.

Creation: Mostly Binary search is created using linked representation(Linked list)

Time complexity : As we are searching an element,the element will take as long time as the height of the tree.
 So the time complexity will be log(n).
 But ,to create a binary search tree ,as we will put n elements in the tree for that n times and as we have to search
  the element is in the bst before inserting it,So we need more log(n) time.
  So total time complexity nlog(n) for creating a binary search tree.

  */

#include<iostream>
using namespace std;

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


void preOrder(struct Node *p)
{
    if(p){
      cout<<p->data<<" ";
     preOrder(p->lchild);
     preOrder(p->rchild);
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

void postOrder(struct Node *p)
{
   if(p){

     postOrder(p->lchild);
     postOrder(p->rchild);
     cout<<p->data<<" ";
   }

}

void Search(int x)
{
    struct Node *p=root;

    while(p!=NULL)
    {
        if(x==p->data)
        {
            cout<<endl<<"Element is found!"<<endl;
            break;
        }
        else if(x>p->data) p=p->rchild;
        else p=p->lchild;
    }
    if(p==NULL)
    {
        cout<<"Element Not Found!"<<endl;
    }
}

void DeleteNode(int x)
{
    /*
        In BST,if we go the left child of a parent ,then from that left child we will go till the last right(right most) child,that last right child will be called "Inorder predecessor"
        and If we go to the right child of a parent ,then from that right child if we go till the last left(left most) child,that last left child will be called as "Inorder successor"

        So,Whenever we want to delete a node from a binary search tree,Inorder predecessor or Inorder successor should take it's place.We have to check for it.

        The time complexity for this deletion is depending on the height of a tree.Because we are searching and modifying it.
        If predecessor and successor are leaf nodes ,then there will be needed just one modification.
        else,there can be needed multiple modifications.

        complexity of the height of a tree: log(n)
        complexity of the deletion will be also : log(n),as we are not modifying all the nodes.




    */
}




int main()
{
    Insert(10);
    Insert(30);
    Insert(20);
    Insert(70);
    cout<<"Preorder of BST: "<<endl;
    preOrder(root);
    Insert(60);
    cout<<endl<<"Inorder of BST will give us sorted elements: "<<endl;
    inOrder(root);
    Insert(85);
    Insert(65);
    cout<<endl<<"Postorder of BST: "<<endl;
    postOrder(root);
    cout<<endl<<"Preorder of BST: "<<endl;
    preOrder(root);
    int x;
    cout<<endl<<"Enter an element to search in the BST: ";
    cin>>x;
    Search(x);


}



















 #
