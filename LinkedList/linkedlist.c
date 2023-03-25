#include<stdio.h>
#include<stdlib.h>
typedef struct linkedlist
{
	int data;
	struct linkedlist *next;
}node;

node* insert(node*);
node* del(node*);
void display(node*);

node* insert(node* head)
{
	node *curr =head;
	node *temp= (node*)malloc(sizeof(node*));
	
	if(head == NULL)
	{
		printf("enter a number");
		scanf("%d",&temp->data);
		temp->next=NULL;
		head = temp;
	}
	else
	{
		while(curr->next!=NULL)
		{
			curr=curr->next;
		}
			curr->next=temp;
			printf("enter a number");
			scanf("%d",&temp->data);
			temp->next=NULL;
	}
	return head;
}

void display(node* head)
{
	node *curr=head;
	if(head == NULL)
	{
		printf("linkedlist is empty");
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
	node *curr=head;
	node *prev=NULL;
	
	if(head==NULL)
	{
		printf("already empty dude !!!!");
		return NULL;
	}
	if(head->next==NULL)
	{
		printf("%d is deleted",head->data);
		free(head);
		return NULL;
	}
	else
	{
		while(curr->next!=NULL)
		{
			prev=curr;
			curr=curr->next;
		}
			printf("%d is deleted",curr->data);
			free(curr);
			prev->next=NULL;
	}
	return head;
}
main()
{
	node *head =NULL;
	
	int ch;
	
	do{
		printf("\n1.insert\n2.delete\n3.display\n4.exit\n");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1: 
				head = insert(head);
				break;
			case 2:
				head = del(head);
				break;
			case 3:
				display(head);
				break;
			case 4:
				exit(0);
			default:
				printf("enter a valid number");
				break;
		}
	}while(ch>=1&&ch<=4);
}
