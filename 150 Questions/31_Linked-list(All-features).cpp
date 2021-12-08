#include <bits/stdc++.h>
using namespace std;

class Node{

public:
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        this->next =NULL;
    }

};

Node* takeInput(){
    int data;
    cin>>data;

    Node* head = NULL;
    Node* tail = NULL;

    while(data != -1){
        Node *n = new Node(data);
        if(head == NULL){
            head = n;
            tail = n;
        }
        else{
             tail->next = n;
             tail = n;
        }

        cin>>data;
    }

    return head;
}

void displayList(Node* head){
    if(head == NULL){
        cout<<"Linked list is empty!";
        return;
    }
    cout<<"Linked List: ";
    while(head != NULL){
        cout<<head->data<<"-->";
        head = head->next;
    }
    cout<<"NULL"<<endl;
}

int listLength( Node* head){
    Node* temp = head;
    if(temp == NULL) return 0;
    int count = 0;
    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    return count;
}

int recursiveLength(Node *head){
    if(head == NULL) return 0;

    return 1 + recursiveLength(head->next);
}

int printNthNode(Node* head, int pos){
    if(head == NULL){
        cout<<"Linked List is empty!";
        return 0;
    }
    int iterator = 0;
    Node* temp = head;
    while(iterator != pos-1){
        temp = temp->next;
        if(temp == NULL){
            cout<<"Invalid position!";
            break;
        }
        iterator++;
    }

    if(temp != NULL) return temp->data;
    else return -1;
}


void insertAt(Node* head, int pos, int data){
    Node* temp = head;
    Node* currNode = temp;

    int iterator = 0;
    while(iterator != pos-1){
        currNode = temp;

        temp = temp->next;
        if(temp == NULL){
            cout<<"Invalid position!"<<endl;
            return;
        }
        iterator++;
    }
    Node *n = new Node(data);
    currNode->next = n;
    n->next = temp;
    cout<<"Element Inserted"<<endl;
    displayList(head);

}

void deleteNode(Node *head, int pos){
    if(head == NULL) {
        cout<<"Linked list is empty!";
        return;
    }
    Node* temp = head;
    int iterator=0;
    while(iterator != pos-2){
        if(temp == NULL){
            cout<<"Invalid position!"<<endl;
            return;
        }
        temp = temp->next;
        iterator++;
    }
    if(temp == NULL) {
        return;
    }
    cout<<"Node deleted!"<<endl;
    Node* deletedNode = temp->next;
    temp->next = temp->next->next;

    delete deletedNode;
    displayList(head);
}

int findMiddleElement(Node* head){
    if(head == NULL) return -1;
    Node* first = head;
    Node* second = head->next;
    while(second != NULL && second->next !=NULL){
        first = first->next;
        second = second->next->next;
    }
    
     return first->data; //odd number
}
int main(){

   Node *head = takeInput();
   displayList(head);

   int length = listLength(head);
   cout<<"list length: "<<length<<endl;
   int pos;
   cin>>pos;
   int data = printNthNode(head, pos);
   cout<<pos<<" th Node is :"<<data<<endl;

   insertAt(head,3,5);

   deleteNode(head,3);

   int mid = findMiddleElement(head);
   cout<<"Middle element: "<<mid<<endl;

   return 0;

}
