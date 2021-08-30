/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* Remove(struct ListNode* head, int val){
    if(head == NULL) {
        return NULL;
    }
    
    int Value = head->val;
    
    if((head->next != NULL && head->next->val == head->val) || head->val == val) {
        struct ListNode* temp = head;
        head = head->next;
        free(temp);
        temp = NULL;
        
        return Remove(head, Value);
    }
    
    head->next = Remove(head->next, Value);
    return head;
}

struct ListNode* deleteDuplicates(struct ListNode* head){
    int val = INT_MIN;
    head = Remove(head, val);
    return head;
}
