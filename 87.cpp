#include<stdio.h>
int main()
{
	int i,n;
	printf("Enter a number = ");
	scanf("%d",&n);
	i=1;
	
	int a=0;
	while(n)
	{
		 n=n/10;
		 a++;
	}
	
	printf(" Digits = %d",a);
}
