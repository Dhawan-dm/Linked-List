/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* Next = NULL;

struct ListNode* reverseList(struct ListNode* head, int n) {
    
    
    if (n == 1) {
        
        Next = head->next;
        
        return head;
        
    }
    
    struct ListNode* last = reverseList(head->next, n -1);
    
    head->next->next = head;
    
    head->next = Next;
    
    return last;    
}

struct ListNode* reverseBetween(struct ListNode* head, int l, int r) {
    
    
    if (l == 1)
        
        return reverseList(head, r);
    
    head->next = reverseBetween(head->next, l-1, r-1);
    
    return head;
}
