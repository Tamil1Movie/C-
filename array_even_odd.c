#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
int main()
{
	int arr[100],i,n,even=0,odd=0;
	printf("Enter n:");
	scanf("%d",&n);
	srand(time(NULL));
	for(i=0;i<n;i++)
		arr[i]=rand()%100+1;
	printf("Given array:");
	for(i=0;i<n;i++)
		printf("%d\t",arr[i]);
        for(i=0;i<n;i++)
	{
		if(arr[i]%2==0)
			even++;
		else
			odd++;
	}
	printf("NO of Even numbers:%d",even);
	printf("NO of odd numbers=%d",odd);
	return 0;
}
