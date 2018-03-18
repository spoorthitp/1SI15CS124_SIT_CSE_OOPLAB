#include <iostream>
#include <cmath>

using namespace std;

typedef struct{
	float x,y;
}point;

typedef struct{
	float a,b,c;
}parabola;

void readABC(parabola *p)
{
	cout<<"Enter a,b and c:\n";
	cin>>p->a>>p->b>>p->c;
}

float calDistance(point p1,point p2)
{
	double xDiff=pow(p1.x-p2.x,2);
	double yDiff=pow(p1.y-p2.y,2);
	
	return sqrt(xDiff+yDiff);
}

double area(parabola p, int y1, int y2)
{
	double sum=0;
	float a,b;
	point p1,p2;
	if(y1>y2)
	{
		a=y2;
		b=y1;
	}
	else
	{
		a=y1;
		b=y2;
	}
	for(float i=a;i<b;i+=0.001)
	{
		p1.y=p.a*i*i+p.b*i+p.c;
		p1.x=i;
		p2.y=p1.y;
		p2.x=-i;
		sum+=calDistance(p1,p2);
	}
	
	return sum;
}

int main()
{	
	parabola p;
	readABC(&p);
	int y1,y2;
	cout<<"Enter lower limit:";
	cin>>y1;
	cout<<"Enter upper limit:";
	cin>>y2;
	cout<<"The are of the given parabola is:"<<area(p,y1,y2)<<" units\n";
}
