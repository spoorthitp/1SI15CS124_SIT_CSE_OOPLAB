#include <iostream>

using namespace std;

class Big{
		int x,y;		//to store the two numbers
	public:
		void fnReadNumbers();		
		void fnDispBiggest();
};

void Big::fnReadNumbers()
{
	//Takes the input from the users and stores it in the member variables.
	cout<<"Enter the first number:";
	cin>>x;
	cout<<"\nEnter the second number:";
	cin>>y;
	cout<<endl;
}

void Big::fnDispBiggest()
{
	//Display the biggest among the two numbers entered.
	cout<<"\nAmong "<<x<<" and "<<y<<", the biggest number is ";
	if(x>y)		//if first number is greater than second
		cout<<x;
	else
		cout<<y;
	cout<<endl;
}
int main()
{
	Big numbers;	//object of type Big
	numbers.fnReadNumbers();
	numbers.fnDispBiggest();
	cout<<endl;
	return 0;
}