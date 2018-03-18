#include <iostream>

using namespace std;

class FractionType{
	int iNum,iDen;
	public:
		FractionType();
		~FractionType();
		void fnSetFraction(int iN,int iD);
		void fnAddFraction(const FractionType &,const FractionType &);
		FractionType fnAddFraction(int );
		void fnShowFraction();		
};

FractionType::FractionType()
{
	iNum=iDen=0;
	cout<<"\nConstructor";
}

FractionType::~FractionType()
{
	cout<<"\nDestructor";
	cout<<endl;
}
void FractionType::fnSetFraction(int iN,int iD)
{
	if(iN==0)
	{	iNum=iN;	iDen=1;	}
	else
	{	iNum=iN;	iDen=iD; }
}

void FractionType::fnAddFraction(const FractionType &f1,const FractionType &f2)
{
	iNum=f1.iNum*f2.iDen+f1.iDen*f2.iNum;
	iDen=f1.iDen*f2.iDen;
}

FractionType FractionType::fnAddFraction(int i)
{
	FractionType t;
	t.iNum=iDen*i+iNum;
	t.iDen=iDen;
	return t;
}

void FractionType::fnShowFraction()
{
	cout<<"\n\n"<<iNum<<"/"<<iDen<<endl;
}
int main()
{
	FractionType f1,f3;
	cout<<"\nConstructor initialised values.";
	
	f1.fnShowFraction();
//	f2.fnShowFraction();
//	f3.fnShowFraction();
	
	
	f1.fnSetFraction(2,10);
//	f2.fnSetFraction(4,10);
//	
//	f3.fnAddFraction(f1,f2);
	
	cout<<"\n On adding fractions :";
	f1.fnShowFraction();
//	cout<<"\n and "<<endl;
//	f2.fnShowFraction();
//	cout<<"\n=";
//	f3.fnShowFraction();
	
	f3=f1.fnAddFraction(10);
	
	cout<<"\nOn adding 10 to ";	
	f1.fnShowFraction();
	cout<<"\n=";
	f3.fnShowFraction();
	
	return 0;
}
