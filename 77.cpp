#include<stdio.h>
int main()
{
	int i,n;
	printf("Enter a number = ");
	scanf("%d",&n);
	i=1;
	while(n>=i)
	{
		if(n%2==0)
		printf(" %d",n);
		n--;  
	}
	
}
