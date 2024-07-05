#include<stdio.h>
int main()
{
	int a,b;
	printf("enter a number = ");
	scanf("%d",&a);
	
	b=a%10;
	b=a-b;
	printf("digits = %d",b);
}
