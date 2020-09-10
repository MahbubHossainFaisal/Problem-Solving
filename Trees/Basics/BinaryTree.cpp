#include <bits/stdc++.h>
#include<queue>
using namespace std;


class Node
{
public:
 Node *lchild;
 int data ;
 Node *rchild;
};

class Tree
{
    public:
    Node *root;
    Tree()
    {
        root=NULL;
    }
    void createTree()
    {
        Node *p,*t;
        int x;
        /*
        We need a queue to store all the node address.
        when we will create the first root node we will push the address of the
        root node to the queue.
        After that,we will take a node type pointer and point the queue front which
        will be holding the tree node addresses.
        We will use the pointer to create left child and right child of a particular node.
        After creating the nodes we will pop out the parent node address from the node.
        So a new node address will come in the front and we will be able to create child for those nodes.
        That's why we need to queue to store the create Node addresses.
        */
        queue <Node*> q;
        cout<<"Enter root value: ";
        cin>>x;
        root=new Node;
        root->data =x;
        root->lchild=root->rchild=NULL;
        q.push(root);

        while(!q.empty())
        {
            p=q.front();
            q.pop();

            cout<<"Enter left child of "<<p->data<<" : ";
            cin>>x;
            if(x!=-1)
            {
                t=new Node;
                t->data=x;
                t->lchild=t->rchild=NULL;
                p->lchild=t;
                q.push(t);
            }
            cout<<"Enter right child of "<<p->data<<" : ";
            cin>>x;
            if(x!=-1)
            {
                t=new Node;
                t->data=x;
                t->lchild=t->rchild=NULL;
                p->rchild=t;
                q.push(t);
            }
        }


    }

    void preOrder(Node *p)
    {

        if(p)
        {
            cout<<p->data<<" ";
            preOrder(p->lchild);
            preOrder(p->rchild);
        }
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

    void postOrder(Node *p)
    {

        if(p)
        {
            postOrder(p->lchild);
            postOrder(p->rchild);
            cout<<p->data<<" ";
        }
    }


    int Height(Node *p)
    {
        int x=0,y=0;
        if(p==0)
            return 0;
        x=Height(p->lchild);
        y=Height(p->rchild);
        if(x>y)
            return x+1;
        else
            return y+1;
    }

    void levelOrder(Node *p)
    {
        /* we need another queue for showing level order traversal
        because, in level order we show nodes level by level
        so first we show the root node data and push the root node address in
        the queue.
        After that we will be having a while loop where,
        we pop out Node addresses from queue till the queue is empty.
        First after popping the root node and pointing to that, we check if the root node has any left child,if it has? then,
        we will show the node data and push the left node address in the queue
        then we will check if the root node has any right child or not. If has?
        then we will show the node data and push the right node address in the queue.
        then we will again point to the front element of the node.
        pop it ,check it's left right child,show it,push it in the queue and continue till the last node.
        By doing this,the nodes will be printed level by level.
        */
        queue <Node*> t;
        cout<<p->data<<" ";
        t.push(p);

        while(!t.empty())
        {
            p=t.front();
            t.pop();
            if(p->lchild)
            {
                cout<<p->lchild->data<<" ";
                t.push(p->lchild);
            }
            if(p->rchild)
            {
                cout<<p->rchild->data<<" ";
                t.push(p->rchild);
            }
        }

    }

    int countNodes(Node *p)
    {

        /*As we are using recursion ,Say example from root node first the p pointer will go to till the last left child from the root node,
            After the last left child p becomes null,So in  x there will be 0 stored.Then p will go for finding right child if the last left child have any.
            After when p will become null in y there will be stored 0 . then we are returning x+y+1 means 0+0+1,
            By following this method while traversing every node,that node will return a 1 value .and adding them we will find the node number.
        */
        int x,y;
        if(p)
        {
            x=countNodes(p->lchild);
            y=countNodes(p->rchild);
            return x+y+1;
        }
        return 0;
    }

    int countLeafNodes(Node *p)
    {
         int x,y;
        if(p)
        {
            x=countLeafNodes(p->lchild);
            y=countLeafNodes(p->rchild);
            if(!p->lchild && !p->rchild)
            {
                return x+y+1;
            }
            else
            {
                return x+y;
            }

        }

        return 0;
    }

    int countNodesOfDegreeOne(Node *p)
    {
         int x,y;
        if(p)
        {
            x=countNodesOfDegreeTwo(p->lchild);
            y=countNodesOfDegreeTwo(p->rchild);
            if((p->lchild && !p->rchild) || (!p->lchild && p->rchild))
            {
                return x+y+1;
            }
            else
            {
                return x+y;
            }
        }

        return 0;
    }

    int countNodesOfDegreeTwo(Node *p)
    {
         int x,y;
        if(p)
        {
            x=countNodesOfDegreeTwo(p->lchild);
            y=countNodesOfDegreeTwo(p->rchild);
            if(p->lchild && p->rchild)
            {
                return x+y+1;
            }
            else
            {
                return x+y;
            }
        }

        return 0;
    }

    int countNonLeafNodes(Node *p)
    {
         int x,y;
        if(p)
        {
            x=countNonLeafNodes(p->lchild);
            y=countNonLeafNodes(p->rchild);
            if(p->lchild || p->rchild)
            {
                return x+y+1;
            }
            else
            {
                return x+y;
            }

        }

        return 0;
    }
};


int main()
{
    Tree t;
    t.createTree();
    cout<<endl<<"PreOrder : "<<endl;
    t.preOrder(t.root);
    cout<<endl<<"inOrder : "<<endl;
    t.inOrder(t.root);
    cout<<endl<<"PostOrder: "<<endl;
    t.postOrder(t.root);
    cout<<endl<<"Height of the tree is: "<<t.Height(t.root)-1;
    cout<<endl<<"Level Order: "<<endl;
    t.levelOrder(t.root);
    cout<<endl<<"The number of nodes in the binary tree are: "<<t.countNodes(t.root)<<endl;
    cout<<endl<<"Number of leaf nodes: "<<t.countLeafNodes(t.root)<<endl;
     cout<<endl<<"Number of nodes with degree 1: "<<t.countNodesOfDegreeOne(t.root)<<endl;
    cout<<endl<<"Number of nodes with degree 2: "<<t.countNodesOfDegreeTwo(t.root)<<endl;
     cout<<endl<<"Number of Non leaf nodes: "<<t.countNonLeafNodes(t.root);
}
