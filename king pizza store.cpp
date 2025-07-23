
#include<stdio.h>
main()
{
	int p=150,s=100,c=50,ai,qty,finalprice,price=0,bill;
	char yes='y';
	printf("Welcome, Kingpizza Store \n");
	
	do{
	printf("\n");
	printf("***Menu***");
	printf("\n");
	printf("Pizza : %d\nSendwich : %d\nColdDrink :%d\n",p,s,c);

	printf("\n");
    printf("*****Select Item*****\n");
    printf("press 1 for pizza \npress 2 for Sendwich\npress 3 for colddrink \n");
    printf("\n");
	printf("press key : ");
	scanf("%d",&ai);

	
	switch(ai)
	{
		case 1 : printf("pizza ");
		         printf("Quantity :");
		         scanf("%d",&qty);
		         price =price + (qty*p);
		         printf("pizza : %d * %d = %d \n",p,qty,price);
		break;
		case 2 : printf("Sendwich ");
		         printf("Quantity :");
		         scanf("%d",&qty);
		         price =price + (qty*s);
		         printf("SendWich : %d * %d = %d \n",s,qty,price);
		break;
		case 3 : printf("ColdDrink ");
		         printf("quentity :");
		         scanf("%d",&qty);
		         price =  price + (qty*c);
		         printf("ColdDrink : %d * %d = %d \n",c,qty,price);
		break;
	}

	
	printf("you will add more item : ");
	scanf(" %c",&yes);
	
	finalprice=price;
	
	}while(yes == 'y');
	
	printf("Your Total Bill is : %d",price);
	}

