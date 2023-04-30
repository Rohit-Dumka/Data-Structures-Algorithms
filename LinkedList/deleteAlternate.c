#include<stdio.h>
#include<stdlib.h>
typedef struct linkedlist
{
	int data;
	struct linkedlist *next;
}node;

node* insert(node* head)
{
	node* curr=head;
	node *temp=(node*)malloc(sizeof(node));
	printf("enter a value: ");
	scanf("%d",&temp->data );
	temp->next=NULL;
	if(head==NULL)
	{
		head=temp;
	}
	else
	{
		while(curr->next!=NULL)
		{
			curr=curr->next;
		}
		curr->next=temp;
	}
	return head;
}

void disp(node* head)
{
	node* curr=head;
	if(head==NULL)
	{
		printf("empty");
	}
	else
	{
		while(curr!=NULL)
		{
			printf("%d ",curr->data);
			curr=curr->next;
		}
	}
}

node* del(node* head)
{
	node* curr=head->next;
	node* pre=head;
	if(head==NULL)
	return;
	while(curr!=NULL && pre!=NULL)
	{
		pre->next=curr->next;
//		free(curr);
		pre=pre->next;
		if(pre!=NULL)
		curr=pre->next;
	}
	return head;
}

main()
{
	node *head=NULL;
	int ch;
	do
	{
		printf("\n1.insert\n2.delete alternate\n3.display\n4.exit\n");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1:
				head=insert(head);
				break;
			case 2 :
				head=del(head);
				break;
			case 3 :
				disp(head);
				break;
			case 4 :
				exit(0);
			default:
				printf("enter a valid choice");
				break;
		}
	}while(ch>=1&&ch<=5);
}
