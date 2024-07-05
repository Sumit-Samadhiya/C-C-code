#include<stdio.h>
int main()
{
	int si , p , r ,t;
	
	printf("Enter the Principal , rate of interest , time = ");
	scanf("%d%d%d",&p,&r,&t);
	
	si= (p*r*t)/100;
	printf("Simple intresest = %d",si);
	
}
