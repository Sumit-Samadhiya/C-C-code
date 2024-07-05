#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter a three digit number = ");
	scanf("%d",&a);
	
	b=a%10;
	c=a/10;
	b=b*100;
	c=b+c;
	printf("Answer = %d",c);
}
