#include<stdio.h>
int main()
{
	int i,n;
	printf("Enter a number = ");
	scanf("%d",&n);
	i=1;
int	a=0;
	while(n>=i)
	{
		if(i%2==0)
		a=a+i;
		i++;  
	}
	printf(" Sum of Even numbers = %d",a);
	
}
