#include<stdio.h>
int main()
{
	int a,b;
	char choice;
	
	printf("Enter Value 1 :");
	scanf("%d",&a);
	printf("Enter value 2 :");
	scanf("%d",&b);
	printf("sum '+'\n");
	printf("sub '-'\n");
	printf("multi '*'\n");
	printf("Div '/'\n");
	printf("Mod '%'\n");
	
	printf("Select Your (+,-,*,/,%)\n");
	scanf(" %c",&choice);
	
//	printf("Sum is = %d\n",a+b);
//	printf("Sub is = %d\n",a-b);
//	printf("multi is = %d\n",a*b);
//	printf("Div is = %d\n",a/b);
//	printf("Per is = %d\n",a%b);

	switch(choice){
		case '+' : 
			printf("Sum of two Number : %d",a+b);
			break;
		case '-' : 
			printf("Sub of two Number : %d",a-b);
			break;
		case '*' : 
			printf("Multi of two Number : %d",a*b);
			break;
		case '/' : 
			printf("Div of two Number : %d",a/b);
			break;
		case '%' : 
			printf("Mod of two Number : %d",a%b);
			break;
			
	}
}
