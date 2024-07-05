#include<stdio.h>
int main()
{
	int a,b,c,d,e;
	printf("Enter a three digit number = ");
	scanf("%d",&a);
	
	b=a%10;
	a=a/10;
	c=a%10;
	a=a/10;
	d=a%10;
	
	e=b+c+d;
	printf("%d",e);
}
