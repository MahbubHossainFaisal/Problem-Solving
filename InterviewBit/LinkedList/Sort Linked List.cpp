/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 
 struct ListNode* mergeBoth(struct ListNode* first,struct ListNode* second){
     struct ListNode* answer = NULL;
 
     if(!first) return second;
     else if(!second) return first;
 
     if(first->val <= second->val){
         answer = first;
         answer->next = mergeBoth(first->next,second);
     }
     else{
         answer = second;
         answer->next = mergeBoth(first,second->next);
     }
     return answer;
 }
 
 void findMiddle(struct ListNode* cur, struct ListNode** first, struct ListNode** second){
     struct ListNode* fast;
     struct ListNode* slow;
     slow = cur;
     fast = cur->next;
     while(fast!=NULL){
         fast = fast->next;
         if(fast!=NULL){
             slow=slow->next;
             fast=fast->next;
         }
     }
     *first = cur;
     *second = slow->next;
     slow->next = NULL;
 }
 void mergeSort(struct ListNode** head){
     struct ListNode* cur = *head;
     struct ListNode *first,*second;
     if(!cur or !cur->next) return;
 
     findMiddle(cur,&first,&second);
     mergeSort(&first);
     mergeSort(&second);
    *head = mergeBoth(first,second);
 }
ListNode* Solution::sortList(ListNode* A) {
    mergeSort(&A);
    return A;
}