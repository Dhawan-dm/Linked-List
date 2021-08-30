/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
        struct ListNode *a, *b;
    
        a = b = head;
    
        int count = 0;
    
        while(count < n && b) {

            b = b->next;
            
            count++;
            
        }
    
        if(!b)  
        {
            
            return head->next;
        }
    
        while(b->next) {
            
            a = a->next; 
            b = b->next; 
        }
    
        a->next = a->next->next; 
    
        return head;       
}
