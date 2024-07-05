#include<stdio.h>
int main()
{
	int cuboid , l,b,h;
	
	printf("enter the Lenght , width , height of cuboid = ");
	scanf("%d%d%d",&l,&b,&h);
	
	cuboid= l*b*h;
	
	printf("Volum of cuboid = %d", cuboid);
}
