// Write two small programs: one using Procedural Programming (POP) to calculate the
// area of a rectangle, and another using Object-Oriented Programming (OOP) with a
// class and object for the same task.

#include<iostream>
using namespace std;

class rectangle{
	public :
		int length, breadth;


	int getarea()
	{
		return length * breadth;
	}
	};
	int main()
	{
		rectangle rect;
		
		cout << "Enter Your Length :" << endl;
		cin >> rect.length;
		
		cout << "Enter Your Breadth :" << endl;
		cin >> rect.breadth;
		
		cout << "Area of Ractangle is : " << rect.getarea() << endl;
	}
