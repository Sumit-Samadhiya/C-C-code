#include<stdio.h>
int main()
{
	int n;
	printf("enter the month number : ");
	scanf("%d",&n);
	
	switch(n)
	{
		case 1:
			printf("January : 31 days");
			break;
			
		case 2:
			printf("Feb : 28 days");
			break;
			
		case 3:
			printf("Mar : 31 days");
			break;
			
		case 4:
			printf("April : 30 days");
			break;
			
		case 5:
			printf("May : 31 days");
			break;
			
		case 6:
			printf("Jun: 30 days");
			break;
			
		case 7:
			printf("Jul : 31 days");
			break;
			
		case 8:
			printf("Aug : 31 days");
			break;
			
		case 9:
			printf("Sep : 30 days");
			break;
			
		case 10:
			printf("Oct : 31 days");
			break;
			
		case 11:
			printf("Nov : 30 days");
			break;
			
		case 12:
			printf("Dec : 31 days");
			break;	
		
		default: 
			printf("Invalid instruction");
														
	}
}
