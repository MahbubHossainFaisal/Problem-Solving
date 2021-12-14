class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == NULL) return list2;
        if(list2 == NULL) return list1;
        
        ListNode* head = NULL;
        ListNode* tail = NULL;
        ListNode* pt1 = list1;
        ListNode* pt2 = list2;
        
        while(pt1!=NULL && pt2!=NULL){
            if(pt1->val <= pt2->val){
                if(head == NULL){
                    head = pt1;
                    tail = pt1;
                    pt1 = pt1->next;
                }
                else{
                    tail->next = pt1;
                    tail = tail->next;
                    pt1 = pt1->next;
                }
            }
            else{
                if(head == NULL){
                    head = pt2;
                    tail = pt2;
                    pt2 = pt2->next;
                }
                else{
                    tail->next = pt2;
                    tail = tail->next;
                    pt2 = pt2->next;
                }
            }
        }
        
        if(pt1 != NULL){
            while(pt1!=NULL){
                tail->next = pt1;
                    tail = tail->next;
                    pt1 = pt1->next;
            }
        }
        if(pt2 != NULL){
            while(pt2!=NULL){
                tail->next = pt2;
                    tail = tail->next;
                    pt2 = pt2->next;
            }
        }
        
        
        return head;
        
    }
};