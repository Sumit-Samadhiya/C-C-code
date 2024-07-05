#include<stdio.h>
int main()
{
	int i,n;
	printf("Enter a number = ");
	scanf("%d",&n);
	i=1;
	int a=0;
	while(i<=n)
	{
	
		a=a+i*i*i;
		i++;  
	}
	
	printf(" Sum of cubes number = %d",a);
}
