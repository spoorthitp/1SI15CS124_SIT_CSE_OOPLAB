#ifndef 
#include <iostream>

using namespace std;
class Radian;
class Degree;

class Radian{
	float rad;
	public:
		Radian():rad(0.0){}
		Radian(float fRad):rad(fRad){}
		Radian(Radian&fRad):rad(fRad.rad){}
		Radian(Degree&);
		
		Radian& operator=(const Radian&);
		operator Degree() cost;
		Radian operator+(const Radian&)const;
		Radian operator-(const Radian&)const;
		
};

class Degree{
	int deg;
	
	public:
		Degree():deg(0){}
		Degree(int iDeg):deg(iDeg){}
		Degree(Degree&iDeg):deg(iDeg.deg){}
		Degree(Radian&);
		
		Degree& operator=(const Degree&);
		operator Radian() const;
		Degree operator+(const Degree&)const;
		Degree operator-(const Degree&)const;
};
