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
    struct ListNode *curr = head;
    
    while (current->next != NULL) {
        
        
        len++;
        current = current->next;
    }
    
    current->next = head;
    
    int pos = len - k % len;
    
    for (int i = 0; i < pos-1; i++) {
        
        curr = curr->next;
    } 
    
    head = curr->next;
    
    curr->next = NULL;
    return head;
}
