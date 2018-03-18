#include <iostream>
#include <cstdlib>
#include <new>

using namespace std;

class loc{
	int longitude,latitude;
	
	public:
		loc(){}
		
		loc(int lg,int lt)
		{
			longitude=lg;
			latitude=lt;
		}
}
