#include<stdio.h>
int main()
{
	int n,i;
	
	printf("Enter your Value :  ");
	scanf("%d",&n);
	
	printf("****FOR LOOP****\n");
	for(i=1;i<=10;i++)
	{
		printf("No is : %d\n",i);
	}
	
	printf("****WHILE LOOP****\n");
	i=0;
	while(i<=n)
	{
		printf("No is : %d\n",i);
		i++;
	}
	
	printf("****DO-WHILE LOOP****\n");
	i=1;
	do
	{
		printf("%d\n",i);
		i++;
	}while(i<=10);
}
