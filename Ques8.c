/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2){
    
    
    struct ListNode* head = NULL;
    struct ListNode* first = l1;
    struct ListNode* second = l2;
    struct ListNode* current;
    
    
    if(first && (!second || first->val <= second->val)){
        
        
        head = first;
        first = first->next;
        
    } 
    else if(second && (!first || second->val < first->val)){
        
        head = second;
        
        second = second->next;
    }
    
    current = head;
    
    while(first && second){
        
        
        if(first->val <= second->val){
            
            current->next = first;
            
            first = first->next;
            
        }
        else{
            
            current->next = second;
            second = second->next;
        }
        
        current = current->next;
    }
    
    if(first){
        
        current->next = first; 
    }
    
    else if(second){
        
        current->next = second; 
    }
    
    return head;
    
}
