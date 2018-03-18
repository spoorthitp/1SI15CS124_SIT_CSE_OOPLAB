#include <iostream>

using namespace std;

char *MyString;
class MyStringType{
	char *array;
	
	public:
//		MyStringType(int n)
//		{
//			array=new char[n];
//		}
		
		void fnSetString(char MyString[]);
		
		int fnStringLen();
		
		void fnShowString();
		
		void fnSetPos(char,int);
		
		void fnReverseString();
		
};

void MyStringType::fnSetString(char MyString[])
{
	array=MyString;
}
int MyStringType::fnStringLen()
{
	int i;
	for(i=0;array[i]!='\0';++i);
	
	return i;
}

void MyStringType::fnShowString()
{

}

void MyStringType::fnReverseString()
{
	int len=fnStringLen()-2;
	int i=0;
	char temp;
	while(i<=len/2)
	{
		temp=array[i];
		array[i]=array[len-i];
		array[len-i]=temp;
		++i;
	}
}
int main()
{
//	int n;
//	cout<<"\Enter string length:";
//	cin>>n;
	MyStringType s;
	MyString="Hello World";
	s.fnSetString(MyString);
	cout<<"\nString Length:"<<s.fnStringLen()<<endl;
	s.fnShowString();
	s.fnReverseString();
	s.fnShowString();
	return 0;
}
