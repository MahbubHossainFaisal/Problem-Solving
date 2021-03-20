#include <bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	Node* leftChild;
	Node* rightChild;

}*root = NULL;

void insertInBST(int x)
{
	Node* t = root;
	Node *a,*b;

	if(root == NULL){

		t = new Node;
		t->data = x;
		t->leftChild = NULL;
		t->rightChild = NULL;
		root = t;
		return;
	}

	while(t)
	{
		a = t;
		if(x < t->data){
			t = t->leftChild;
		}
		else if(x > t->data){
			t = t->rightChild;
		}
		else {
			cout<<" Same value can't be inserted in BST"<<endl;
			return;
		}

	}

	b = new Node;
	b->data = x;
	b->leftChild = NULL;
	b->rightChild = NULL;

	if( x < a->data ){
		a->leftChild = b;
	}
	else {
		a->rightChild = b;
	}


}

Node* deleteFromBST(int data,Node *root)
{
    if(root == NULL){
        return NULL;
    }
    if(data > root->data){
        root->rightChild = deleteFromBST(data,root->rightChild);
    }
    else if(data < root->data){
        root->leftChild = deleteFromBST(data,root->leftChild);
    }
    else{
        if(root->leftChild == NULL && root->rightChild == NULL){
            delete root;
            return NULL;
        }
        else if(root->leftChild == NULL){
            Node* temp = root->rightChild;
            root->rightChild = NULL;
            delete root;
            return temp;
        }
        else if(root->rightChild == NULL){
            Node* temp = root->leftChild;
            root->leftChild = NULL;
            delete root;
            return temp;
        }
        else {
            Node* minNode = root->rightChild;
            while(minNode->leftChild != NULL){
                minNode= minNode->leftChild;
            }
            int rightMinimum = minNode->data;
            root->data = rightMinimum;
            root->rightChild = deleteFromBST(rightMinimum,root->rightChild);
            return root;
        }
    }
}

void printBST(Node *root)
{
    if(root == NULL){
        return;
    }
    cout<<root->data<<" : ";
    if(root->leftChild!= NULL){
        cout<<"Left: "<<root->leftChild->data<<",";
    }
    if(root->rightChild != NULL){
        cout<<"Right: "<<root->rightChild->data;
    }
    cout<<endl;
    printBST(root->leftChild);
    printBST(root->rightChild);
}



void searchInBST(int x)
{
	if(root == NULL){
		cout<<"The tree is empty"<<endl;
		return;
	}
	Node* p = root;

	while(p)
	{
		if( x == p->data){
			cout<<"Element found in the BST"<<endl;
			break;
		}
		else if(x < p->data){
			p = p->leftChild;
		}
		else if(x > p->data){
			p = p->rightChild;
		}
	}

	if(p == NULL){
		cout<<"Element not found in the BST"<<endl;
	}
}

int main()
{
	insertInBST(20);
	insertInBST(12);
	insertInBST(1);
	insertInBST(4);
	insertInBST(8);
	insertInBST(30);
	insertInBST(18);
	insertInBST(25);
	insertInBST(33);
	insertInBST(44);

    printBST(root);

	cout<<endl;
	searchInBST(30);
	Node *t = deleteFromBST(30,root);
	cout<<endl<<"after deleteing node : "<<endl;
	printBST(root);
	cout<<endl;
	searchInBST(30);
}


