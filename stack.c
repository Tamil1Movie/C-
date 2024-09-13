#include<stdio.h>
#include<stdlib.h>
#define MAX 100
int stack[MAX];
int top=-1;
void push(int [],int );
int pop(int []);
void print(int []);
int main()
{
	int var,choice;
	do
	{
		printf("MAIN MENU");
		printf("\n1.PUSH");
		printf("\n2.POP");
		printf("\n3.PRINT");
		printf("\n4.EXIT");
		printf("\nEnter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("\nEnter the element to be pushed:");
				scanf("%d",&var);
				push(stack,var);
				break;
			case 2:
				var=pop(stack);
				printf("\nThe value deleted from te stack:%d",var);
				break;
			case 3:
				print(stack);
				break;
			case 4:
				return 0;
				break;
				
		}
	}while(choice!=5);
	return 0;
}
void push(int stack[],int var)
{
	if(top==MAX-1)
	{
		printf("STACK IS FULL");
	}
	else
	{
		top++;
		stack[top]=var;
	}
}
int pop(int stack[])
{
	int var;
	if(top==-1)
	{
		printf("Stack is Empty");
		return -1;
	}
	else
	{
		var=stack[top];
		top--;
		return var;
	}
}
void print(int stack[])
{
	int i;
	if(top==-1)
	{
		printf("STACK IS EMPTY");
	}
	else
	{
		for(i=top;i>=0;i--)
		{
			printf("%d\t",stack[i]);
		}
	}
}
