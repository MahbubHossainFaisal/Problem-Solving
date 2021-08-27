/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::swapPairs(ListNode* A) {
    
    if(A==NULL || A->next == NULL) return A;
    struct ListNode *p,*q;
    p=A;
    q=A->next;
    p->next = q->next;
    q->next = p;
    A->next = swapPairs(p->next);
    return q;
    
   
}
