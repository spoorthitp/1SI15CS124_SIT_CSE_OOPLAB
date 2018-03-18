using namespace std;

#include <iostream>

class Position{
	int longitude,latitude;
	
	public:
		Position(){}
		Position(int lg,int lt)
		{
			longitude=lg%360;
			latitude=lt%360;
		}
		
		Position operator++();
		Position operator++(int dummy);
		Position operator--();
		Position operator--(int dummy);
		
		friend ostream& operator << (ostream&,const Position &);
		friend istream& operator >> (istream&,Position &);
};

Position Position::operator++()
{
	longitude=(++longitude)%360;
	latitude=(++latitude)%360;
	return *this;
}

Position Position::operator ++(int dummy)
{
	longitude=(++longitude)%360;
	latitude=(++latitude)%360;
	return *this;
}

Position Position::operator--()
{
	longitude=(--longitude)%360;
	latitude=(--latitude)%360;
	return *this;
}

Position Position::operator --(int dummy)
{
	longitude=(--longitude)%360;
	latitude=(--latitude)%360;
	return *this;
}


ostream& operator << (ostream& cout, const Position& p)
{
	cout<<"\n(longitude:"<<p.longitude<<",latitude:"<<p.latitude<<")\n";
	return cout;
}

istream& operator >> (istream& cin, Position& p)
{
	cout<<"\nEnter\nLongitude:";	cin>>p.longitude;
	cout<<"Latitude:";	cin>>p.latitude;
	return cin;
}

int main()
{
	Position p1(10,12),p2;
	cout<<p1;
	++p1;
	cout<<p1;
	cin>>p1;
	++p1;
	cout<<p1;
	cin>>p2;
	cout<<p2;
	--p2;
	cout<<p2;
	
	return 0;
}
