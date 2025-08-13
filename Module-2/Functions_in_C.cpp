#include<stdio.h>

	int factorial(int a);
	
int main()
{	
	int num;
	printf("Enter your number :");
	scanf("%d",&num);
	
	int result = factorial(num);
	printf("Factorial is = %d is %d\n",num,result);
	return 0;
}

	int factorial(int a){
		int fact=1;
		for(int i=1;i<=a;i++){
			fact = fact * i;
		}
		return fact;
	}
