/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* rotateRight(struct ListNode* head, int k){
     if (!head || !head->next || !k ) return head;
 
    // find the tail, compute the len to find k.
    // since were not iterate the whole list to NULL
    // len starts from 1.
    
    int len = 1;
    
    struct ListNode *current = head;
    
    while (current->next != NULL) {
        
        
        len++;
        current = current->next;
    }
    
    
    current->next = head;
    int pos = len - k % len;
    
    for (int i = 0; i < pos; i++) {
        
        current = current->next;
    } 
    
    head = current->next;
    
    current->next = NULL;
    return head;
}
