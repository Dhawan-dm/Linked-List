/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


int length(struct ListNode* head){
    int count=1;
    struct ListNode *first = head;
    
    while(first->next!=NULL){
        first=first->next;
        count++;
    }
    return count;
}

bool isPalindrome(struct ListNode* head){
    int len = length(head);
    struct ListNode* last= head;
    struct ListNode* plast=head;
    struct ListNode* prev=NULL;
    struct ListNode* first=head;
    struct ListNode* Loop=NULL;
 
    
if(head==NULL) return false;
if (len == 1)
	return true;
    

    
    for(int i=0;i< (len/2) ; i++){
        plast=first->next;
        first->next=prev;
        prev=first;
        last=first;
        first=plast;
        Loop=plast;
    } 
if(len %2 == 1){
    Loop=Loop->next;
}
   
    for(int i=0;i<(len/2);i++){
        
        if(last->val!=Loop->val){
           
           return false;
        }
          Loop=Loop->next;
           last=last->next;
            
    }
    return true;
}
