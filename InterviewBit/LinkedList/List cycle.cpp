/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::detectCycle(ListNode* A) {
   struct ListNode *slow,*fast;

   slow=A;
   fast=A;

   while(fast->next!=NULL){
       fast=fast->next;
       if(fast->next!=NULL){
           slow=slow->next;
           fast=fast->next;
       }
       if(fast==slow){
           while(A!=slow){
             A=A->next;
             slow=slow->next;
         }
         return slow;
   }
       }
 
   return NULL;
}
