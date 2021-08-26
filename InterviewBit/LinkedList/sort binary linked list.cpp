/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::solve(ListNode* A) {
    struct ListNode *p,*q;
    int count =0;
    p=A;
    while(p!= NULL){
       if(p->val == 0){
           count++;
       }
       p=p->next;
    }
    q=A;
    while(q!=NULL){
        if(count>0) {
            q->val = 0;
            q=q->next;
            count--;
        }
        else{
            q->val = 1;
            q=q->next;
        }
    }
    return A;

   

}
