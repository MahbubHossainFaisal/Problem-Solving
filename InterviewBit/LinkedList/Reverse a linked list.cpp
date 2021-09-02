/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::reverseList(ListNode* A) {
    struct ListNode *p,*q,*r;
    if(A->next == NULL) return A;
    else if(A->next->next == NULL){
        p=A->next;
        p->next = A;
        A->next = NULL;
        A=p;
        return A;
    }
    else{
        p=A;
        q=A->next;
        r=q->next;
        while(r!= NULL){
            q->next =p;
            p=q;
            q=r;
            r=r->next;
        }
        q->next = p;
        A->next = NULL;
        A=q;
        return A;
    }
}
