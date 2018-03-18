#include <iostream>
#include <cmath>
using namespace std;

inline float fnCircumference(float );
inline float fnCalcArea(float );

int main()
{
	float rad;
	
	cout<<"\nEnter the radius of the circle:";
	cin>>rad;
	
	cout<<"\nThe circumference is:"<<fnCircumference(rad)<<endl;
	cout<<"\nThe area is:"<<fnCalcArea(rad)<<endl;
	
	return 0;		
}

float fnCircumference(float r)
{
	return 2*M_PI*r;
}

float fnCalcArea(float r)
{
	return M_PI*r*r;
}
