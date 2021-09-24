#include<iostream>
using namespace std;
void prime(int x)
{
	int flag=0;
	for(int i=2; i<=x/2; i++)
	{
		if(x%i==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
		cout << "Number is Prime" <<endl;
	else
		cout << "Number is non Prime" << endl;
}
int main()
{
	int n;
	cout << "Enter a number to check: ";
	cin >> n;
	prime(n);
	return 0;
}
