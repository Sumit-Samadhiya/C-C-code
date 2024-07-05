#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter value of a, b, c = ");
	scanf("%d %d %d",&a,&b,&c);
	
	if( a+b>c && a+c>b && b+c>a )
	{
		printf("Valid");
	}
	else
	{
		printf("Not Valid");
	}
}
