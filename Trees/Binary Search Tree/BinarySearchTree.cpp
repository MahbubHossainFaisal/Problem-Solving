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
	insertInBST(8);
	insertInBST(30);
	insertInBST(33);
	insertInBST(44);

	searchInBST( 34 );
}


