#include<stdio.h>
int main()
{
	int array[100],reverse[100],i,size=10,j;
	printf("Enter %d elements:",size);
	for(i=0;i<size;i++)
		scanf("%d",&array[i]);
	printf("Given array:");
	for(i=0;i<size;i++)
		printf("%d\t",array[i]);
	for(i=size-1,j=0;i>=0;i--,j++)
		reverse[j]=array[i];
	printf("Reverse array:",reverse[i]);
	for(i=0;i<size;i++)
		printf("%d\t",reverse[i]);
	return 0;
}
