#include<stdio.h>
#include "fact.h"
int fact(int);
int main()
{
        int n,i,f=1;
        printf("Enter n:");
        scanf("%d",&n);
        printf("Factorial=%d",fact(n));
}
