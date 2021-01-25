#include<iostream>
using namespace std;

int main(){
	int a[]={1,2,3,4};
	char b[]="hga";
	cout<<a<<endl;
	cout<<b<<endl; 

	char* c=&b[0];
	cout<<b<<endl;
	cout<<c<<endl;

	char v='x';
	char* q=&v;
	
	cout<<v<<endl;
	cout<<q<<endl;
}