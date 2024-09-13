#include<stdio.h>
int main()
{
	int array[100],left,right,middle,size,found=0,element,i;
	printf("Enter the number of elements:");
	scanf("%d",&size);
	printf("Enter %d sorted elements:");
	for(i=0;i<size;i++)
		scanf("%d",&array[i]);
	printf("Given Array:");
	for(i=0;i<size;i++)
		printf("%d\t",array[i]);
	printf("\nEnter the element to be searched:");
	scanf("%d",&element);
	left=0;
	right=size-1;
	while(left<=right)
	{
		
		middle=left+(right-left)/2;
		if(array[middle]==element)
		{
			printf("Element %d found ",element);
			found=1;
			break;
		}
		else if(array[middle]<element)
			left=middle+1;
		else
			right=middle-1;
	}
	if(!found)
		printf("Element %d is not found");
	return 0;
}
