#include <iostream>
#include <cmath>

using namespace std;

void fnSumDiff(int,int,int&,int&);

int main()
{
	int iVal1,iVal2,iSum,iDiff;
	
	cout<<"\nEnter the two numbers:";
	cin>>iVal1>>iVal2;
	
	fnSumDiff(iVal1,iVal2,iSum,iDiff);
	
	cout<<"\nSum is :"<<iSum;
	
	cout<<"\nDifference is:"<<iDiff<<endl;
	
	return 0;	
}

void fnSumDiff(int iM,int iN,int &iS,int &iD)
{
	iS=iM+iN;
	iD=abs(iM-iN);
}
