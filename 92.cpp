// 0,1,1,2,3,5,8

#include<stdio.h>
int main()
{
	int i,n;
	printf("Enter the number = ");
	scanf("%d",&n);
	
	
	int a=0;
	int b=1;
	
	printf("%d",a);
	printf(" %d",b);
	
	for(i=2;i<=n;i++)
	{
		int c=a+b;
		printf(" %d",c);
		a=b;
		b=c;
		
	}
	
}
