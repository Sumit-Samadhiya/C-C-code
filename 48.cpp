#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter value of a, b, c = ");
	scanf("%d %d %d",&a,&b,&c);
	
	int d,x,X;
	
	d=b*b-4*a*c;
	
	x=(-b+d)/(2*a);
	X=(-b-d)/(2*a);
	printf("Value of x = %d\n",x);
	printf("Value of x = %d\n",X);
	
	if(d<0)
	{
		printf("Imezenary number");
	}
	else if(d>0)
	{
		printf("real & distinct ");
	}
	else if(d==0)
	{
		printf("real & equal");
	}
}
