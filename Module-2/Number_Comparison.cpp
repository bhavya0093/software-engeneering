#include<stdio.h>
int main()
{
	int a,b,c;
	
	printf("Enter Value A :");
	scanf("%d",&a);
	printf("Enter Value B :");
	scanf("%d",&b);
	printf("ENter Value C :");
	scanf("%d",&c);
	
	if(a>=b && b>=a)
	{
		printf("Grater=%d\n",a);
	}else if(b>=a && b>=c)
	{
		printf("Grater=%d\n",b);
	}else
	{
		printf("Grater=%d\n",c);
	}
	
	if(a<=b && b<=a)
	{
		printf("Small=%d\n",a);
	}
	else if(b<=c && b<=c)
	{
		printf("Small=%d\n",b);
	}else
	{
		printf("Small=%d",c);
	}
	
}
