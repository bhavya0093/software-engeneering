#include<stdio.h>
int main()
{
	int num,ran;
	printf("Enter your number :");
	scanf("%d",&num);
	printf("Enter Your Range :");
	scanf("%d",&ran);
	
	
	for(int i=1;i<=10;i++){
		printf("%d x %d = %d\n",num,i,i*ran);
	}
	
	printf("RANGE TABLE\n");
	
	for(int i=1;i<=ran;i++){
		printf("%d x %d = %d\n",num,i,i*ran);
	}
	return 0;
}
