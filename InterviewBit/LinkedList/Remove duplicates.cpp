/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::deleteDuplicates(ListNode* A) {
    struct ListNode* p = A;

    struct ListNode* q = p->next;

    while(q!=NULL){
        if(p->val == q->val){
            p->next = q->next;
            delete q;
            q=p->next;
        }
        else{
            q=q->next;
            p=p->next;
        }
    }
    return A;
}
