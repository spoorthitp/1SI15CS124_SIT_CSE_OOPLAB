#include <iostream>

using namespace std;

class cl{
	static int resource;
	
	public:
		static int get_resource();
		
		void free_resource()
		{
			resource=0;
		}
};

int cl::resource;

int cl::get_resource()
{
	if(resource)
		return 0;
	else
	{
		resource=1;
		return 1;
	}
}

int main()
{
	cl ob1,ob2;
	
	if(cl::get_resource())
		cout<<"\nLocking resource.";
	if(!ob1.get_resource())
		cout<<"\nResouce locked";
	ob1.free_resource();
	
	if(ob1.get_resource())
		cout<<"\nResource allocated";
	else
		cout<<"\nResource locked";
	cout<<endl;	
	return 0;
}
