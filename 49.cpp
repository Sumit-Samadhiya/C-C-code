#include<stdio.h>
int main()
{
	int x;
	printf("Enter the year = ");
	scanf("%d",&x);
	
	if(x%100)
	{
		x%4?printf("Non leap year"):printf("leap year");
		
	}
	else
	{
		if(x%400)
		{
			printf("Non leap year");
		}
		else
		{
			printf("leap year");
		}
	}
	
}
