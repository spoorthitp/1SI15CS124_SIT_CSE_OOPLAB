/**
*Program to print implement clock time.
*A 'ClockTimeType' class is used to achieve the same
**/

#include <iostream>
#include <cmath>

using namespace std;

class ClockTimeType{
	int iHour,iMin,iSec;

public:
	void fnSetTime(int,int,int);
	ClockTimeType* fnRetrieveTime();
	void fnPrintTime();
	void fnIncSec();
	void fnIncMin();
	void fnIncHour();
	int fnCompareTime(ClockTimeType);
};

void ClockTimeType::fnSetTime(int h,int m,int s)
{
	//Sets the time to said value if the passed parameters are valid
	//Else sets the time to midnight, i.e. 00:00:00
	if(h<25 && m<61 && s<61)
	{
		iHour=h;
		iMin=m;
		iSec=s;
	}
	else
	{
		iHour=iMin=iSec=0;
		cout<<"\nSorry but invalid time thus initialised to midnight."<<endl;
	}
}

ClockTimeType* ClockTimeType::fnRetrieveTime()
{
	//Returns a pointer to the calling object
	return this;
}

void ClockTimeType::fnPrintTime()
{
	//Displays the time in appropriate format
	cout<<endl;
	cout<<"\n"<<iHour<<":"<<iMin<<":"<<iSec<<endl;
}

void ClockTimeType::fnIncSec()
{
	//Increments the seconds by 1.
	//Checks for condtion wherein sec=59, if so, it increments the minute instead
	//By calling fnIncMin() method.
	if(iSec==59)
		fnIncMin();
	else
		++iSec;
}

void ClockTimeType::fnIncMin()
{
	//Increments the minutes by 1.
	//Checks for condtion wherein min=59, if so, it increments the hour instead
	//By calling fnIncHour() method.
	if(iMin==59)
		fnIncHour();
	else
		++iMin;
}

void ClockTimeType::fnIncHour()
{
	//Increments the hours by 1.
	//Checks for condtion wherein hour=23, if so, it sets the hour to 0
	if(iHour==23)
		iHour=0;
	else
		++iHour;
}

int ClockTimeType::fnCompareTime(ClockTimeType t2)
{
	//Compares two objects and returns 0 if equal else returns 1 if not equal.
	if(iSec==t2.iSec && iMin==t2.iMin && iHour==t2.iHour)
		return	0;
	return 1;
}
int main()
{
	ClockTimeType t1,t2,*t3=NULL;
	int iHour,iMin,iSec;

	cout<<"\nEnter hour for t1:";		cin>>iHour;
	cout<<"\nEnter minutes for t1:";	cin>>iMin;
	cout<<"\nEnter seconds for t1:";	cin>>iSec;
	t1.fnSetTime(iHour,iMin,iSec);
	
	cout<<"\nTime 1 is:"<<endl;
	t1.fnPrintTime();
	t3=t1.fnRetrieveTime();
	cout<<"\nRetrived time:"<<endl;
	t3->fnPrintTime();
	
	cout<<"\nIncrement by 1 sec:";
	t1.fnIncSec();
	t1.fnPrintTime();

	cout<<"\nIncrement by 1 min:";
	t1.fnIncMin();
	t1.fnPrintTime();

	cout<<"\nIncrement by 1 hour:";
	t1.fnIncHour();
	t1.fnPrintTime();

	cout<<"\nEnter hour for t2:";		cin>>iHour;
	cout<<"\nEnter minutes for t2:";	cin>>iMin;
	cout<<"\nEnter seconds for t2:";	cin>>iSec;

	t2.fnSetTime(iHour,iMin,iSec);
	cout<<"\nTime 2 is:"<<endl;
	t2.fnPrintTime();

	if(!t1.fnCompareTime(t2))
		cout<<"\nT1 and T2 are same!";
	else 
		cout<<"\nT1 and T2 are different!";

	return 0;
}