#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the numbers = ");
	scanf("%d%d",&a,&b);
	
		printf("before Swap = %d  %d\n",a,b);
	
	c=a;
	a=b;
	b=c;
	
	printf("after Swap  = %d  %d",a,b);
}
