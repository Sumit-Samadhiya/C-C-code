#include<stdio.h>
int main()
{
	int i,n;
	printf("Enter a number = ");
	scanf("%d",&n);
	i=1;
	int a=1;
	while(i<=n)
	{
	
		a=a*i;
		i++;  
	}
	
	printf(" Factorial number = %d",a);
}
