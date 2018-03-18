#include <iostream>

using namespace std;

class DistanceType{
	int iFeet,iInches;
	
	public:
	
	void fnSetDist(int,int);
	void fnDispDist();
	
	DistanceType operator + (const DistanceType&)const;
	DistanceType operator - (const DistanceType&)const;
	
	bool operator == (const DistanceType&)const;
//	voi operator =(const DistanceType&);
	void operator = (const DistanceType&);
};

void DistanceType::fnSetDist(int iF,int iI)
{
	if(iI>=12)
	{
		iInches=iI%12;
		iFeet=iF+iI/12;
	}
	else
	{
		iInches=iI;
		iFeet=iF;
	}
}

bool DistanceType:: operator == (const DistanceType&d)const
{
	return (iFeet==d.iFeet&&iInches==d.iInches);
}
void DistanceType::fnDispDist()
{
	cout<<"\n"<<iFeet<<"'"<<iInches<<"\""<<endl;
}

DistanceType DistanceType::operator + (const DistanceType& d)const
{
	DistanceType sum;
	int in=iFeet*12+iInches+d.iFeet*12+d.iInches;
	sum.iFeet=in/12;
	sum.iInches=in%12;
	
	return sum;
}

DistanceType DistanceType::operator - (const DistanceType& d)const
{
	DistanceType diff;
	int in=iFeet*12+iInches-d.iFeet*12+d.iInches;
	diff.iFeet=in/12;
	diff.iInches=in%12;
	
	return diff;
}

void DistanceType::operator=(const DistanceType& b)
{
	iFeet=b.iFeet;
	iInches=b.iInches;
}

int main()
{
	DistanceType d1,d2,d3;
	d1.fnSetDist(10,11);
	d2.fnsetDist(20,12);
	d1.
	return 0;
}
