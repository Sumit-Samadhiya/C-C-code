#include<stdio.h>
int main()
{
	int x;
	printf("Enter a Number = ");
	scanf("%d",&x);
	
	if(x>=100 && x<=999)
	{
		printf("Three digit number ");
	}
	else
	{
		printf("Not Three digit number");
	}
}
