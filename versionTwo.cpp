#include <iostream>
#include <cmath>

using namespace std;

typedef struct point{
	int x,y;
}point;

typedef struct circle{
	point centre;
	int radius;
}circle;

void readCircleDetails(circle *c)
{
	cout<<"\nEnter centre(x,y) of the circle:\n";
	cin>>c->centre.x>>c->centre.y;
	cout<<"Enter the radius of the circle:";
	cin>>c->radius;
}

void displayCircleDetails(circle c)
{
	cout<<"\nCircle details";
	cout<<"\nCentre:(x="<<c.centre.x<<",y="<<c.centre.y<<")";
	cout<<"\nRadius: "<<c.radius<<" units";
}

int distanceBPoints(point p1,point p2)
{
	int xDiff=pow(p1.x-p2.x,2);
	int yDiff=pow(p1.y-p2.y,2);
	return (int) sqrt(yDiff+xDiff);
}

void checkCircles(circle c1,circle c2)
{
	int concentric = distanceBPoints(c1.centre,c2.centre);
	if(!concentric)
		cout<<"\n1.Concentric circles!";
	else
		cout<<"\n1.Non-Concentric cicles!";
	
	if(concentric==(c1.radius+c2.radius))
		cout<<"\n2.Circles touch each other!";
	else if(distanceBPoints(c1.centre,c2.centre)<(c1.radius+c2.radius))
		cout<<"\n2.Circles are intercepting";
	else
		cout<<"\n2.Circles are disjoint!";
}
void clrscr(int n)
{
	for(int i=0;i<500;++i)
		cout<<"\n";
}

int main()
{
	circle c1, c2;
	cout<<"Enter details of circle one:";
	readCircleDetails(&c1);
	cout<<"Enter details of circle two:";
	readCircleDetails(&c2);
	cout<<"\n";
	clrscr(100);
	cout<<"Circle 1:";
	displayCircleDetails(c1);
	cout<<"\nCircle 2:";
	displayCircleDetails(c2);
	cout<<"\nProperties:";
	checkCircles(c1,c2);
	cout<<"\n";
}
