#include<stdio.h>
int main()
{
	int a;
	printf("Enter your number :");
	scanf("%d",&a);
	
	if(a % 2 == 0)
	{
		printf("Even\n");
	}else
	{
		printf("Odd\n")
		;
	}
	
	if(0<a)
	{
		printf("Positive\n");
	}else if(0>a)
	{
		printf("nagative\n");
	}
	else{
		printf("Zero");
	}
	
	if(a % 3 == 0 && a % 5 == 0){
		printf("value multi in 3 is 5 : %d\n",a);
	}	else
	{
		printf("value is not multi in 3 is 5 : %d",a);
	}
	
}
