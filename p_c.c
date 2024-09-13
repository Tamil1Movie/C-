#include<stdio.h>
int fact(int n);
int main()
{
	int n,r;
	float p,c;
	printf("Enter n and r:");
	scanf("%d%d",&n,&r);
	p=fact(n)/fact(n-r);
	c=fact(n)/(fact(r)*fact(n-r));
	printf("Permutation=%f",p);
	printf("combination=%f",c);
}
int fact(int n)
{
	int i,prod=1;
	for(i=1;i<=n;i++)
	{
		prod=prod*i;
	}
	return prod;
}
