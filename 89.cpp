#include<stdio.h>
int main()
{
	
	int a,b;
	
	printf("Enter two number = ");
	scanf("%d%d",&a,&b);
	
	int i,s,z,l;
	for(i=1; i<=a*b; i++)
	{
		if(i%a==0 && i%b==0)
		{
			break;
		}
	}
	printf("lcm is %d",i);
}
