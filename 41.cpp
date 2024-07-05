#include<stdio.h>
int main()
{
	int x;
	printf("Enter a number = ");
	scanf("%d",&x);
	
	if(x%5==0)
	{
		printf("Divisible by 5");
	}
	else
	{
		printf("not divisible by 5");
	}
}
