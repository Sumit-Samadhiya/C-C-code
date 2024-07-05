#include<stdio.h>
int main()
{
	int x;
	printf("Enter a Number = ");
	scanf("%d",&x);
	
	if(x%7==0)
	{
		printf("Disible by 7");
	}	
	else if(x%3==0)
	{
		printf("Disible by 3");
	}
	else
	{
		printf("Not disible by 7 and 3");
	}
}
