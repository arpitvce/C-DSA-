#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int val;
	struct Node* next;
};
struct Node* deleteHead(struct Node* head)
{
	if (head==NULL)
	{
		return NULL;
	}
	struct Node* temp=head;
	head=head->next;
	free(temp);
	return head;
}
int main()
{
	struct Node* head=(struct Node*)malloc(sizeof(struct Node));
	struct Node* second=(struct Node*)malloc(sizeof(struct Node));
	struct Node* third=(struct Node*)malloc(sizeof(struct Node));
	struct Node* fourth=(struct Node*)malloc(sizeof(struct Node));
	head->val=10;
	head->next=second;
	second->val=20;
	second->next=third;
	third->val=30;
	third->next=fourth;
	fourth->val=40;
	fourth->next=NULL;
	struct Node* curr=deleteHead(head);
	struct Node* temp=curr;
	while (temp!=NULL)
	{
	printf("%d",temp->val);
	temp=temp->next;
	}
return 0;
}


