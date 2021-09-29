#include<iostream>
using namespace std;
namespace first{
   int add(int a,int b)
   {
   	cout << "hello";
   	return a+b;
   }
	}
	
	namespace sec{
	float add(float a,float b)
	{
	cout << "HELLO";
	return a+b;
		}
		}
using namespace sec;
using namespace first;
		
		
		int main()
		{
		 cout << add(4,5);
		 cout << add(4.5f,5.5);
		 cout << add(4.2f,4);
		 cout << add(2,5.6f);
		 return 0;}
		
		
