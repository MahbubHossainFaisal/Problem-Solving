/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::removeNthFromEnd(ListNode* A, int B) {
    int cnt=0;
    struct ListNode* temp,*p,*q;
    temp = A;
    while(temp!=NULL){
        cnt++;
        temp=temp->next;
    }

    int diff = cnt-B;
    if(diff<=0){
        p=A;
        A=A->next;
        delete p;
    }
   else if(diff > 0){
        p=A;
        q=p;
        for(int i=1; i<=diff; i++){
         q=p;
         p=p->next;
        }
        q->next = p->next;
        delete p;

    }

    return A;
}
