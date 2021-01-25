#include<iostream>
using namespace std;
int main()
{
	int a[10];
	cout<<a<<endl;
	cout<<&a<<endl;
	cout<<&a[0]<<endl;
	a[0]=9;
	a[2]=10;
	cout<<*a<<endl;
	cout<<*(a+2)<<endl;
	return 0;
}