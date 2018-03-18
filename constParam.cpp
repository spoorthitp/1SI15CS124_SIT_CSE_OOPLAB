#include <iostream>
#include <cmath>

using namespace std;

typedef struct{
	int xC,yC;
}POINT;

typedef struct{
	POINT lt,rb;
}RECTANGLE;

int fnCalcArea(const RECTANGLE &);
void fnReadPoint(POINT &);
void fnReadRectangle(RECTANGLE &);

int main()
{
	RECTANGLE r1;
	int iArea;
	fnReadRectangle(r1);
	
	iArea=fnCalcArea(r1);
	
	cout<<"\nArea of rectangle:"<<iArea<<endl<<endl;
	
	return 0;
}

void fnReadPoint(POINT &p)
{
	cin>>p.xC>>p.yC;
}

void fnReadRectangle(RECTANGLE &r)
{
	cout<<"\nEnter the coordinates of top left:";
	fnReadPoint(r.lt);
	
	cout<<"\nEnter the coordinates of bottom left:";
	fnReadPoint(r.rb);
}

int fnCalcArea(const RECTANGLE &r)
{
	int iLen,iBrd;
	
	iLen=abs(r.rb.xC-r.lt.xC);
	iBrd=abs(r.rb.yC-r.lt.yC);
	
	return iLen*iBrd;
}
