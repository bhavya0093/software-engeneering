#include<stdio.h>
#include<string>

int main()
{
	FILE *fptr;
	char name[100];
	
	printf("Enter your name :");
	scanf("%s",&name);
	
	
	fptr = fopen("first.py","w");
	fprintf(fptr ,"%s",name);
	fclose(fptr);
	
	fptr = fopen("first.py","r");
	fscanf(fptr,"%s",name);
	printf("name is : %s",name);
	fclose(fptr);
	return 0;
}
