#include <iostream>
#include <cmath>
using namespace std;

class MyTimeType
{
	int iH,iM,iS;
	public:
		void fnSetTime(int h,int m,int s)
		{
			if(h<24 && m<60 && s<60)
			{	
				iH=h;	iM=m;	iS=s;
			}
			else
				iH=iM=iS=0;
		}
		
		void fnIncHr()
		{
			if(iH==23)
				iH=0;
			else
				++iH;
		}
		void fnIncM()
		{
			if(iM==59)
			{
				iM=0;
				fnIncHr();
			}
			else
				++iM;
		}
		void fnIncS()
		{
			if(iS==59)
			{
				iS=0;
				fnIncM();
			}
			else
				++iS;
		}
		void fnDispTime();		
		void fnAddTime(MyTimeType t1,MyTimeType t2);
};

void MyTimeType::fnDispTime()
{
	cout<<"\n"<<iH<<":"<<iM<<":"<<iS;
}

void MyTimeType::fnAddTime(MyTimeType t1,MyTimeType t2)
{
	if((iH=t1.iH+t2.iH)>23)
		iH=abs(t1.iH-t2.iH);
	if((iM=t1.iM+t2.iM)>59)
	{
		iM=abs(t1.iM-t2.iM);
		fnIncHr();
	}
	if((iS=t1.iS+t2.iS)>59)
	{
		iS=abs(t1.iS-t2.iS);
		fnIncM();
	}
		
}

int main()
{
	MyTimeType t1,t2,t3;
	t1.fnSetTime(5,45,45);
	t2.fnSetTime(5,45,45);
	t3.fnAddTime(t1,t2);
	t1.fnDispTime();
	t2.fnDispTime();
	cout<<"\nAdded Time"<<endl;
	t3.fnDispTime();
	cout<<endl;
	return 0;
}
