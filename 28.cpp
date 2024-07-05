#include<stdio.h>
int main()
{
	int a,b;
		printf("Enter the numbers = ");
		scanf("%d%d",&a,&b);
	
		printf("before Swap = %d  %d\n",a,b);
		
		a=a*b;
		b=a/b;
		a=a/b;
		
		printf("After Swap = %d  %d\n",a,b);
		
}
