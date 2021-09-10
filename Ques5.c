/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* deleteDuplicates(struct ListNode* head){
    if(head == NULL)
    {
        return NULL;
    }
    struct ListNode *dummy = (struct ListNode *)malloc(sizeof(struct ListNode));
    struct ListNode *ptr = dummy;
    
        
    while(head!=NULL)
    {
        if( head->next!=NULL && head->val == head->next->val  )
        {
            while(head->next!=NULL && head->next->val == head->val)
            {
            head=head->next;
            }
            
            ptr->next = head->next;
        }
        else
        {  
            
            ptr = head;
            
        }
        head=head->next;
    }
    return dummy->next;
    
}
