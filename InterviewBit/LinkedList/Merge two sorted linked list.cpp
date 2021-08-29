/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::mergeTwoLists(ListNode* A, ListNode* B) {
    struct ListNode* ans = NULL;

    if(!A) return B;
    else if(!B) return A;

    if(A->val <= B->val){
        ans = A;
        ans->next = mergeTwoLists(A->next,B);
    }
    else{
        ans = B;
        ans->next = mergeTwoLists(A,B->next);
    }

    return ans;
}
