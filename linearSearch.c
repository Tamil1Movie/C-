#include<stdio.h>
int  main()
{
	int array[100],size,element,i,found=0;
	printf("Enter the number of elements to be printed:");
	scanf("%d",&size);
	printf("Enter %d elements:");
	for(i=0;i<size;i++)
		scanf("%d",&array[i]);
	printf("Given array:");
	for(i=0;i<size;i++)
		printf("%d\t",array[i]);
	printf("\nEnter element to be searched:");
	scanf("%d",&element);
	    for(i=0;i<size;i++)
        {
                if(array[i]==element)
                {
                        printf("Element %d found at index %d:",element,i);
                        found=1;
                        break;
                }
        }
        if(!found)
                printf("Element %d is not found",element);
        return 0;
}
