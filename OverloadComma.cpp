#include <iostream>

using namespace std;

class loc{
	int longitude, latitude;
	
	public:
		loc(){}
		loc(int lg,int lt)
		{
			longitude=lg;
			latitude=lt;
		}
		
		void show()
		{
			cout<<endl<<longitude<<" "<<latitude<<endl;
		}
		
		loc operator,(loc op2);
};

loc loc::operator,(loc op2)
{
	return op2;
}

int main()
{
	int x,y;
	x=(y=3,y+1);
	
	cout<<"\nx="<<x<<endl;
	
	loc ob1(10,20),ob2(5,30),ob3(1,1);
	
	ob1.show(); ob2.show(); ob3.show();
	
	cout<<endl;
	
	ob1=(ob1,ob2,ob3);
	
	ob1.show();
	
	return 0;
}
