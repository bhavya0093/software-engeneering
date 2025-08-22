#include<iostream>
using namespace std;

int sum(int a,int b)
{
	return a+b;
}
int sub(int a,int b)
{
	return a-b;
}
int multi(int a,int b)
{
	return a*b;
}
int div(int a,int b)
{
	return a/b;
}

int main(){
	int a , b;
	char ope;
	
	cout << "Enter Your Value 1 :" << endl;
	cin >> a;
	cout << "Enter Your Value 2 :" << endl;
	cin >> b;
	cout << "Choose Your Operator(+ , - , * , / ) " << endl;
	cin >> ope;
	
	switch(ope){
		case '+' :
			cout << "Result :" << sum(a,b) << endl;
			break;
		case '-' :
			cout << "Result :" << sub(a,b) << endl;
			break;
		case '*' :
			cout << "Result :" << multi(a,b) << endl;
			break;
		case '/' :
			cout << "Result :" << div(a,b) << endl;
			break;
			
		default :
			cout << "Invalid Operator" << endl;	
	}
	return 0;
}
