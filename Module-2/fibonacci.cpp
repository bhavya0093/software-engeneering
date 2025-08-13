#include<stdio.h>
main()
{
    
	int a=0,b=1,c,n,i;
	
	printf("enter a value fibonacci : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d ",a);
		c=a+b;
		a=b;
		b=c;
	}
}
