#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter a number and a digit = ");
	scanf("%d%d",&a,&b);
	
	int c;
	c=a*10;
	c=c+b;
	printf("Number = %d",c);
	
}
