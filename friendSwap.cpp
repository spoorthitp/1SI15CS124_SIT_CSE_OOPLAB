#include <iostream>

using namespace std;

class TwoVal
{
	friend void swap(TwoVal&);
	
	private:
		int val1,val2;
		
	public:
		void getData();
		void printValue();
};

void TwoVal::getData()
{
	cout<<"\nEnter any two values:"<<endl;
	cin>>val1>>val2;
}

void TwoVal::printValue()
{
	cout<<"\nValues are="<<val1<<"\t"<<val2<<endl;
}

void swap(TwoVal& v1)
{
	int t;
	t=v1.val1;
	v1.val1=v1.val2;
	v1.val2=t;
}

int main()
{
	TwoVal pair;
	
	pair.getData();
	
	cout<<"\nBefore swapping\n";
	pair.printValue();
	
	swap(pair);
	
	cout<<"\nAfter swapping\n";
	
	pair.printValue();
	
	return 0;
	
}
