#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node*next;
};
struct node*f = NULL;
struct node*r = NULL;
int pos =-1;

void show(struct node* ptr)
{
    while (ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr =ptr->next;
    }
    
}

int isFull(struct node* top)
{
    struct node* n = (struct node*)malloc(sizeof(struct node));
    if(n == NULL)
    {
        return 1;

    }
    return 0;
}
int isEmpty(struct node* top)
{
    
    if(f == NULL)
    {
        return 1;

    }
    return 0;
}
void enqueuef(int val)
{   if(pos == 0)
    {
        printf("Not possible");
    }
    else
    {
     struct node*ptr = (struct node*)malloc(sizeof(struct node));
     ptr->next = f;
     f = ptr;
     f->data = val;
     pos--;
    }
}
void enqueue(int val)
{
    struct node*ptr = (struct node*)malloc(sizeof(struct node));

    if(ptr == NULL)
    {
        printf("full");
    }
    else
    {
        ptr->data = val;
        ptr->next = NULL;

        if(f == NULL)
        {
            f = r = ptr;
            pos++;
        }
        else
        {
            r->next = ptr;
            r = ptr;
        }
    }
}
int dequeue ()
{
    if(f == NULL)
    {
        printf("empty");
    }
    struct node*ptr = f;


    f = f->next;
    int val = ptr->data;
    free(ptr);
    pos++;

    return val;
     
}
int dequeueR()
{
    if(f == r)
    {
        printf("empty");
    }
    struct node*ptr = f;
    struct node*ptr2 = r;
    int val = ptr2->data;
    while(ptr->next!=r)
    {
        ptr=ptr->next;
    }
    r= ptr;
    r->next = NULL;
    free(ptr2);

    // free(ptr->next);
    

    return val;
     
}



int main()
{
   
   enqueue(10);
   enqueue(100);
   enqueue(1);
   enqueue(2);
   
   enqueue(5);
   dequeue();
   enqueue(8);
   
    
   show(f);
   
   enqueuef(8);

   printf("this is%d \n", dequeueR());

   show(f);




   
    

}
