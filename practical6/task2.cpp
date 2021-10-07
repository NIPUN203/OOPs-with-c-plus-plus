#include<bits/stdc++.h>

using namespace std;
int main()
{
	int b;
	string str,a;
	cout<< "Enter a string"<< endl;
	getline(cin,str);
	a=str;
	reverse(str.begin(),str.end());
	//int b=5;
	//cout<< str+b;
	if(a==str)
	cout<< "A pallindrome.";
	else
	cout<< "Not a pallindrome.";
	//cout<<str<<endl;
	//cout << str;
}
