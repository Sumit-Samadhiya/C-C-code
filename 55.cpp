#include<stdio.h>
int main()
{
	int x;
	printf("Enter a Number = ");
	scanf("%d",&x);
	
	if(x%2==0)
	{
		printf("Disible by 2");
	}	
	else if(x%3==0)
	{
		printf("Disible by 3");
	}
	else
	{
		printf("Not disible by 2 and 3");
	}
}
