#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str,a=" hello";
	cout<< "Enter a string"<< endl;
	getline(cin,str);
	a=str;
	int n=str.length();
		cout<< "With function"<<endl;
	reverse(str.begin(),str.end());
	cout<<str<<endl;
	cout<< n;
	cout<< "Without function"<<endl;
	for(int i=0,j=n-1;i<n;i++,j--)
	{
		str[i]=a[j]; 
	}
	cout << str;
}
