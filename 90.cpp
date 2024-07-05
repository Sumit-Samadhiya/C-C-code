#include<stdio.h>
int main()
{
	
	int i,n;
	printf("Enter the number = ");
	scanf("%d",&n);
	
	i=1; int a;
	while(n!=0)
	{
		a=n%10;
		printf("%d",a);
		n=n/10;
	}
	
}
