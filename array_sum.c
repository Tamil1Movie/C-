#include<stdio.h>
int main()
{
        int arr[10],i,sum=0,n;
        printf("Enter n:");
        scanf("%d",&n);
        printf("Enter elements:");
        for(i=0;i<n;i++)
        {
                scanf("%d",&arr[i]);
        }
        printf("Given array:");
        for(i=0;i<n;i++)
        {
                printf("%d\t",arr[i]);
        }
        for(i=0;i<n;i++)
                sum=sum+arr[i];
        printf("Sum=%d",sum);
        return 0;
}
