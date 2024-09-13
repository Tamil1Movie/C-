#include<stdio.h>
#include<stdlib.h>
#define MAX 100
int queue[MAX];
int front=-1;
int rear=-1;
void enQueue(int [],int );
int deQueue(int []);
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
				enQueue(queue,var);
				break;
			case 2:
				var=deQueue(queue);
				printf("\nThe value deleted from QUEUE:%d",var);
				break;
			case 3:
				print(queue);
				break;
			case 4:
				return 0;
				break;
				
		}
	}while(choice!=5);
	return 0;
}
void enQueue(int queue[],int var)
{
	if(rear==MAX-1)
	{
		printf("QUEUE IS FULL");
	}
	else
	{
		rear++;
		queue[rear]=var;
	}
}
int deQueue(int queue[])
{
	int var;
	if(front==-1)
	{
		printf("QUEUE is Empty");
		return -1;
	}
	else
	{
		front++;
		var=queue[front];
		return var;
	}
}
void print(int queue[])
{
	int i;
	for(i=front;i>=rear;i--)
	{
		printf("%d\t",queue[i]);
	}
}
