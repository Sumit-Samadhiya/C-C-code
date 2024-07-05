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
		if(i%2)
		a=a+i;
		i++;  
	}
	
	printf(" Sum of odd number = %d",a);
}
