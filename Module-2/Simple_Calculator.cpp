#include<stdio.h>
int main()
{
	int a,b,result;
	
	printf("Enter Your value A :");
	scanf("%d",&a);
	printf("Enter your value B :");
	scanf("%d",&b);
	printf("1.sum (+)\n");
	printf("2.sub (-)\n");
	printf("3.multi (x)\n");
	printf("4.div (/)\n");
	printf("5.mod ('%')\n");
	printf("Choose No 1 to 5 : ");
	scanf("%d",&result);
	
	switch(result)
	{
		case 1 : 
		result = a + b;
		printf("sum is = %d\n",result);
		break;
		case 2 : 
		result = a - b;
		printf("sub is = %d\n",result);
		break;
		case 3 : 
		result = a * b;
		printf("multi is = %d\n",result);
		break;
		case 4 : 
		if(b != 0){
		result = a / b;
		printf("div is = %d\n",result);
		}else{
		printf("value is zero");
		}
		break;
		case 5 : 
		if(b != 0){
		result = a % b;
		printf("mod is = %d\n",result);
		}else{
		printf("Value is zero");
	}
		break;
		default : printf("Enavlid choice...!");
	}
	return 0;
}
