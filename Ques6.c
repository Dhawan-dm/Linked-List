/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
        struct ListNode *a =(struct ListNode *)malloc(sizeof(struct ListNode ));
         struct ListNode *b =(struct ListNode *)malloc(sizeof(struct ListNode ));
     struct ListNode *c =(struct ListNode *)malloc(sizeof(struct ListNode ));
            
    
        a = b = head;
    int count =0;
      while(a!=NULL)
      {
          a=a->next;
          count++;
      }
    if(count==n)
    {
        return head->next;
    }
    count= count-n;
    
    
    while(count!=1)
    {
        b=b->next;
        count--;
    }
    
    
    c= b->next->next;
    a =b->next;
    free(a);
    b->next= c;
    
    
    
    
        return head;       
}
