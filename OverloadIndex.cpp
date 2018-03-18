#include <iostream>
#include <cstdlib>

using namespace std;

class SafeArray{
	int sz;
	int *Arr;
	
	public:
		SafeArray(){}
		SafeArray(int s)
		{
			sz=s;
			Arr=new int[sz];
		}	
		
		~SafeArray()
		{delete [] Arr;}
		
		int& operator[](int x);
		friend ostream& operator << (ostream& os,const SafeArray& ia);
		
		friend istream& operator >> (istream& is,SafeArray& ia);
};

int& SafeArray::operator[](int x)
{
	if(x<0||x>=sz)
	{
		cout<<"\nOut of range\n";
		exit(0);
	}
	
	return Arr[x];
}

ostream& operator << (ostream &os,SafeArray& ia)
{
	cout<<"\nArray elements are:"<<endl;
	
	for(int i=0;i<ia.sz;++i)
		cout<<ia.Arr[i]<<"\t";
	
	cout<<endl;
	return os;
}

istream& operator >> (istream& is,SafeArray& ia)
{
	cout<<"\nEnter array elements:";
	
	for(int i=0;i<ia.sz;++i)
		is>>ia.Arr[i];
		
	return is;
}

int main()
{
	int size,value;
	int iIndex,i,iValAtIndex;
	
	cout<<"\Enter array size:";
	cin>>size;
	
	SafeArray sArr[size];
	
	cin>>sArr;
	cout<<sArr;
	
	cout<<"\nEnter an array index:";
	cin>>iIndex;
	value=sArr[iIndex];
	cout<<"\nValue at index : "<<iIndex<<" is "<<value;//sArr[iIndex];
	
	sArr[2]=sArr[2]+1;
	//sArr[2]+=1;
	
	cout<<endl<<sArr[2];
	
	return 0;
}
