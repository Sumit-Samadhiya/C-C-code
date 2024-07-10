#include<stdio.h>
int main()
{
	char c;
	printf("Enter a character =  ");
	scanf("%c",&c);
	
	if(c>='a' && c<='z')
	{
		printf("lower case");
	}
	else if(c>='A' && c<='Z')
	{
		printf("Upper case");
	}
}
