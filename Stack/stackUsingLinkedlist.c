#include<stdio.h>
#include<stdlib.h>
typedef struct stack
{
	int data;
	struct stack *next;
}node;

node* push(node* head)
{
	node* curr=head;
	node* temp=(node*)malloc(sizeof(node));
	printf("enter val to insert: ");
	scanf("%d",&temp->data);
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

node* pop(node* head)
{
	node* curr=head;
	node* pre=NULL;
	
	if(head==NULL)
	{
		printf("stack underflow");
		return NULL;
	}
	if(head->next==NULL)
	{
		printf("%d is deleted",head->data);
		head=NULL;
		return head;
	}
	else
	{
		while(curr->next!=NULL)
		{
			pre=curr;
			curr=curr->next;
		}
		printf("%d is deleted",curr->data);
		pre->next=NULL;
	}
	return head;
}

void peak(node* head)
{
	node* curr=head;
	if(head==NULL)
	{
		printf("stack underflow");
	}
	else
	{
		while(curr->next!=NULL)
		{
			curr=curr->next;
		}
		printf("top is : %d",curr->data);
	}
}

void disp(node* head)
{
	node* curr=head;
	if(head==NULL)
	{
		printf("stack underflow");
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

main()
{
	node* head=NULL;
	int ch;
	do
	{
		printf("\n1.pusssssh\n2.po00000op\n3.peeeeeak\n4.disppppplay\n5.exit hehe\n");
		printf("enter your choice : ");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1: 
				head=push(head);
				break;
			case 2:
				head=pop(head);
				break;
			case 3:
				peak(head);
				break;
			case 4:
				disp(head);
				break;
			case 5:
				exit(0);
			default:
				printf("looOOook at the choices dude......!!");
				break;
		}
	}while(ch>=1&&ch<=5);
}
