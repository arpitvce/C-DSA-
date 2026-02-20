#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int val;
	struct Node* next;
};
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
	second->next=third;
	third->next=fourth;
	fourth->next=head;
	struct Node* p=head;
	printf("%d->",head->val);
	head=head->next;
	while (head!=p)
	{
		printf("%d->",head->val);
		head=head->next;
		}
	printf("NULL");

	return 0;
}

		
