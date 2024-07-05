#include<stdio.h>
int main()
{
	int a;
	char b;
	float c;
	double d;
	
	a= sizeof(2);
	printf("int %d\n",a);
	b=sizeof('s');
	printf("char %d\n",b);
	c=sizeof(c);
	printf("float %f\n",c);
	d=sizeof(d);
	printf("double %lf",d);
}
