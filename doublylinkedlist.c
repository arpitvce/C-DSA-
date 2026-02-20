#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int val;
    struct Node* prev;
    struct Node* next;
};
struct Node* insertAtHead(struct Node* head,int value)
{
    struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
    temp->val=value;
    temp->next=head;
    head->prev=temp;
    temp->prev=NULL;
    head=temp;
    return head;
}
void traverse(struct Node* head)
{
    struct Node* temp=head;
    struct Node* end=NULL;
    while (temp!=NULL)
    {
        printf("%d->",temp->val);
        end=temp;
        temp=temp->next;
    }
    
    while(end!=NULL)
    {
        printf("%d->",end->val);
        end=end->prev;
    }
    printf("NULL");
    return ;
}
int main()
{
    struct Node* head=malloc(sizeof(struct Node));
    struct Node* second=malloc(sizeof(struct Node));
    struct Node* third=malloc(sizeof(struct Node));
    struct Node* fourth=malloc(sizeof(struct Node));
    head->val=10;
    second->val=20;
    third->val=30;
    fourth->val=40;
    head->next=second;
    head->prev=NULL;
    second->next=third;
    second->prev=head;
    third->next=fourth;
    third->prev=second;
    fourth->prev=third;
    fourth->next=NULL;
    head=insertAtHead(head,80);
    head=insertAtHead(head,78);
    traverse(head);
    return 0;
}