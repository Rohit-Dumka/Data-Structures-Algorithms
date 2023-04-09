#include<stdio.h>
#define max 5

// declaration of functions we are going to used in this program
int push(int[],int);
int pop(int[],int);
void peak(int[],int);
void display(int[],int);

//push function to insert data into the top of stack
int push(int a[],int top)
{
	if(top==max-1)
	{
		printf("overflow");
	}
	else
	{
		top+=1;
		printf("enter to insert :");
		scanf("%d",&a[top]);
		return top;
	}
	return top;
}

//pop function : to remove (pop) the topmost element from the stack
int pop(int a[],int top)
{
	if(top==-1)
	{
		printf("underflow");
	}
	else
	{
		printf("%d is deleted",a[top]);
		top-=1;
		return top;
	}
	return top;
}
//display function : to display the elements of stack
void display(int a[],int top)
{
	if(top==-1)
	{
		printf("nothing to show kindly insert ");
	}
	else
	{
		int i;
		for(i=top;i>=0;i--)
		{
			printf("%d ",a[i]);
		}
	}
}

//peak function : to display the topmost/recent element of the stack
void peak(int a[],int top)
{
	if(top==-1)
	{
		printf("underflow");
	}
	else
	printf("peak element is : %d ",a[top]);
}

//main function 
int main()
{
	int stack[max];
	int top=-1;
	int ch;
	
	do
	{
		printf("\n1.push\n2.pop\n3.peak\n4.display\n");
		printf("enter your choice: ");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1:
				top=push(stack,top);
				break;
			case 2:
				top=pop(stack,top);
				break;
			case 3:
				peak(stack,top);
				break;
			case 4:
				display(stack,top);
				break;
			case 5:
				exit(0);
			default:
				printf("please enter a valid choice");
				break;
		}
	}while(ch>=1||ch<=5);
}
