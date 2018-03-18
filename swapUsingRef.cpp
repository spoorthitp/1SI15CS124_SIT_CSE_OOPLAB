#include <iostream>

using namespace std;

void swap(int &,int &);

int main()
{
	int iVal1,iVal2;
	
	iVal1=6;
	iVal2=8;
	
	cout<<"\nBefore swapping:";
	cout<<endl<<iVal1<<endl<<iVal2<<endl;
	
	swap(iVal1,iVal2);
	
	cout<<"\nAfter swapping:"<<endl;
	
	cout<<iVal1<<endl<<iVal2<<endl;
	
	return 0;
}


void swap(int &m,int &n)
{
	int t;
	t=m; m=n; n=t;
}
