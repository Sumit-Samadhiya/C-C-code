#include<stdio.h>
int main()
{
	int i,n;
	printf("Enter a number = ");
	scanf("%d",&n);
	for(i=1;n>=i;n--)
	{
		printf(" %d",n);
	}
}
