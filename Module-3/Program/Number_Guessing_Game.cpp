#include<iostream>
using namespace std;

int main()
{
 	int guess=55;
 	
 	
 	
 	cout << "Enter Your Guess Number :" << endl;
 	do{
	 
	 cin >> guess;
	 
	 if(guess >55)
	 {
	 	cout << " Value is High " << endl;
		 }	
	 else if(guess < 55)
	 {
	 	cout << "Value is Low " << endl;
		  }	 
	else
	{
		cout << "Congratulation You Guess Currect" << endl;
		  }	  
		  
}while(guess != 55);
}

