#include<stdio.h>
int main()
{
	int num=0;
	int *ptr;
	
	ptr = &num;
	
	printf("Enter your no : %d\n",num);
	
	*ptr=20;
	
	printf("Updated value is : %d",num);
}
