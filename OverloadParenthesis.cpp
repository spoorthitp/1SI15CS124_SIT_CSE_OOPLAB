#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class RandomInt
{
	int a,b;
	
	public:
		RandomInt(int,int);
		int operator()();
		int operator()(int nb);
		int operator()(int na,int nb);
};

RandomInt::RandomInt(int ia,int ib):a(ia),b(ib){}

int RandomInt::operator()()
{
	return a+rand()%(b-a+1);
}

int RandomInt::operator()(int nb)
{
	return a+rand()%(nb-a+1);
}

int RandomInt::operator()(int na,int nb)
{
	return na+rand()%(nb-na+1);
}

int main()
{
	RandomInt r(3,7);
	
	srand(time(NULL));
	
	cout<<"\nRandom value between 3 and 7:\n"<<r()<<endl;
	
	cout<<"\nRandom value between 3 and 10:\n"<<r(10)<<endl;
	
	cout<<"\nRandom value between 23 and 37:\n"<<r(23,37)<<endl;
	
	return 0;
}
