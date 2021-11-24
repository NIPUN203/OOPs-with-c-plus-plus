#include<bits/stdc++.h>
using namespace std;
int main(){
string str="HELLO";
cout<<"string : "<<str<<endl;
cout<<"string address : "<<&str<<endl;
str[0]='j';
cout<<"string : "<<str<<endl;
cout<<"string address : "<<&str<<endl;
cout<<"therefore strings are mutable";
}
