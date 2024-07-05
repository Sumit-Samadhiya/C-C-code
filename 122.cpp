#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,a,b;
	
	while(1)
	{
	printf(" \n\n\n\n1.---Addition---");
	printf(" \n2.---Subtraction---");
	printf(" \n3.---Multiplication---");
	printf(" \n4.---Division---");
	printf(" \n5.---Exit---");
	
	
	printf("\n\n\nEnter what u want : ");
	scanf("%d",&n);
	
	switch(n)
	{
		case 1:
			printf("Enter Two Number : ");
			scanf("%d%d",&a,&b);
			
			printf("--Addition-- %d",a+b);
			break;
			
		case 2:
			printf("Enter Two Number : ");
			scanf("%d%d",&a,&b);
			
			printf("--Subtraction-- %d",a-b);
			break;
		
		case 3:
			printf("Enter Two Number : ");
			scanf("%d%d",&a,&b);
			
			printf("--Multiplication-- %d",a*b);
			break;
		
		case 4:
			printf("Enter Two Number : ");
			scanf("%d%d",&a,&b);
			
			printf("--Division-- %d",a/b);
			break;
		
		case 5:
			exit(0);	
			
		default:
			printf("Invailid funtion");
			
				
			
	}
	}
}
