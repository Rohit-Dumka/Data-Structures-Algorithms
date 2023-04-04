#include<stdio.h>
#include<stdlib.h>

typedef struct linkedlist
 {
 	int data;
 	struct linkedlist *next;
 }node;

node* insert(node*);
node* del(node*);
void front(node*);
void display(node*);

node* insert(node* head)
{
	node *curr=head;
	node *temp=(node*)malloc(sizeof(node*));
	if(head==NULL)
	{
		printf("enter a number: ");
		scanf("%d",&temp->data);
		temp->next=NULL;
		head=temp;
	}
	else
	{
		while(curr->next!=NULL)
		{
			curr=curr->next;
		}
		curr->next=temp;
		printf("enter a number: ");
		scanf("%d",&temp->data);
		temp->next=NULL;
	}
	return head;
}

node* del(node* head)
{
	node *curr=head;
	node *prev=NULL;
	if(head==NULL)
	{
		printf("already empty");
		return NULL;
	}
	else
	{
		printf("%d is deleted",head->data);
		curr=head->next;
		head=NULL;
		return curr;
	}
	return head;
}

void front(node* head)
{
	node* curr=head;
	if(head==NULL)
	{
		printf("empty queue");
	}
	else
	{
		printf("top element is : %d",head->data);
	}
}

void display(node* head)
{
	node* curr=head;
	if(head==NULL)
	{
		printf("queue is empty");
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
	node *head=NULL;
	int ch;
	do
	{
		printf("\n1.insert\n2.del\n3.top\n4.display\n5.exit\n");
		printf("enter your choice : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				head=insert(head);
				break;
			case 2:
				head=del(head);
				break;
			case 3:
				front(head);
				break;
			case 4:
				display(head);
				break;
			case 5:
				exit(0);
			default:
				printf("enter a valid number");
				break;
		}
	}while(ch>=1||ch<=5);
}
