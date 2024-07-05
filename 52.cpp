 #include<stdio.h>
 int main()
 {
 	float c,s,p,l;
 	
 	printf("Enter Cost and sell prize = ");
 	scanf("%f%f",&c,&s);
 	
 	
 	if(s-c>=0)
 	{
 		p=(s-c)/c*100;
 		printf("profit Persentage = %0.2f",p);
	}
	else
	{
		l=(c-s)/c*100;
		printf("loss Persentage = %0.2f",l);
	}
 }
