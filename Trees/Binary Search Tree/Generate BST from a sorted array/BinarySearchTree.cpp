#include <bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	Node* leftChild;
	Node* rightChild;

};


Node* generateBST(int *arr,int s,int e)
{
    if(s > e){
        return NULL ;
    }

    int mid = (s+e)/2;
    Node* root = new Node;
    root->data=arr[mid];
    root->leftChild= generateBST(arr,s,mid-1);
    root->rightChild= generateBST(arr,mid+1,e);

    return root;
}

void searchInBST(int x, Node* root)
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


//We know that if we print the inorder of a bst we will find a sorted array. So for confirmation let's check the inorder of the bst we have created.
void InorderBST(Node *root)
{
    if(root == NULL){
        return;
    }
    InorderBST(root->leftChild);
    cout<<root->data<<" ";
    InorderBST(root->rightChild);
}

int main()
{
	int *arr = new int[7]{1,2,3,4,5,6,7};
	Node* root =generateBST(arr,0,6);
	searchInBST( 6,root);

	InorderBST(root);
}


