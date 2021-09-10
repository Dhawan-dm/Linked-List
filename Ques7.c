/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* reverseBetween(struct ListNode* head, int left, int right){
    int l =left;
    if(left == right)
    {
        return head;
    }
    if(left == 1 && right == 2)
    {    struct ListNode* edge = head->next->next;
         struct ListNode* edge2 = head;   
        
        head = head->next;
        head->next = edge2;
        edge2->next = edge;
        
     return head;
        
    }
    struct ListNode* prev = head;
    struct ListNode* current = head;
    struct ListNode* nextptr = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* prevptr = (struct ListNode*)malloc(sizeof(struct ListNode));
     struct ListNode* curr = (struct ListNode*)malloc(sizeof(struct ListNode));
    
    if(left>1)
    {
    while(left!=2)
    {
        current = current->next;
        left--;
    }
    
    curr = current;
    current = current->next;
    }
    while(right!=0)
    {
        prev = prev->next;
        right--;
    }
    prevptr = prev;
    while(current!=prevptr)
    {
        nextptr = current->next;
        current->next = prev;
        prev = current;
        current = nextptr;
    }
    if(l>1)
    {
     curr->next =prev;
        return head;
    }
    return prev;
    
    
    
    
    
}
