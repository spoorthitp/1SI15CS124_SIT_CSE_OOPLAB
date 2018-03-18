#include <iostream>

using namespace std;

class A
{
	int a,b;
	public:
		A()
		{
			a=10;
			b=20;		
		}
		A(A&);
		
		void show();
};

A::A(A& r)
{
	a=r.a;
	b=r.b;
}

void A::show()
{
	cout<<a<<endl<<b<<endl;
}

int main()
{
	A r1;
	r1.show();
	
	A r2(r1);
	
	r2.show();
	return 0;
}
