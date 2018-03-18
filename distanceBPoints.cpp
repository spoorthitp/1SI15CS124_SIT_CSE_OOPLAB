#include <iostream>
#include <cmath>

using namespace std;

typedef struct point{
	double x,y;
}point;

double distanceBPoints(point p1,point p2)
{
	double xDiff=pow(p1.x-p2.x,2);
	double yDiff=pow(p1.y-p2.y,2);
	return sqrt(yDiff+xDiff);
}

int main()
{
	point p1,p2;
	cout<<"Enter the first point:";
	cin>>p1.x>>p1.y;
	cout<<"Enter the second point:";
	cin>>p2.x>>p2.y;
	cout<<"Distance between p1("<<p1.x<<","<<p1.y<<") and p2("<<p2.x<<","<<p2.y<<") is "<<distanceBPoints(p1,p2)<<" units";
	cout<<"\n";
	return 0;
}
