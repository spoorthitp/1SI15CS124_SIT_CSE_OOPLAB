#include <iostream>
#include <cmath>

using namespace std;

double fnMySin(double x);
double fnSum(int n);
double fnMyCos(double x);
int fact(int n);

int main()
{
	double x;
	int n, choice;
	cout<<"\n1. sin(x)\t2.cos(x)\tsum(n half fractions0):";
	cout<<"\nEnter your choice:";
	cin>>choice;
	switch(choice)
	{
		case 1:
			cout<<"\nEnter the value of x:";
			cin>>x;
			cout<<"\nsin("<<x<<")="<<fnMySin(x);
			break;
		case 2:
			cout<<"\nEnter the value of x:";
			cin>>x;
			cout<<"\ncos("<<x<<")="<<fnMyCos(x);
			break;
		case 3:
			cout<<"\nEnter number of terms:";
			cin>>n;
			cout<<"\nsum("<<n<<")="<<fnSum(n);
			break;
		default:
			cout<<"\n Not a valid choice!!";
	}
	cout<<endl;
	return 0;
}
int fact(int n)
{
	if(n==1)
		return 1;
	else
		return (n*fact(n-1));
}

double fnMySin(double x)
{
	double sum=0,term=x;
	int iPow=1;
	for(int i=0;i<5;++i)
	{
		sum+=(term/fact(iPow));
		iPow+=2;
		term=-pow(term,iPow);
	}
	return sum;
}

double fnMyCos(double x)
{
	double sum=1,term=x;
	int iPow=2;
	for(int i=0;i<5;++i)
	{
		term=-1*pow(term,iPow);
		sum+=(term/fact(iPow));
		iPow+=2;
	}
	return sum;
}

double fnSum(int n)
{	
	double sum=0;
	while(n>0)
	{
		sum+=pow(1/n,n);
		n--;
	}
	return sum;
}
