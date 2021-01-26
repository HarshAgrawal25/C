#include<iostream>
using namespace std;
int main(){
	int a=32,*ptr=&a;
	char ch='A' , &cho=ch;
	cout<<cho<<endl;
	cout<<&cho<<endl;
	
	cho=cho+32;
	cout<<cho<<endl;

	*ptr+=ch;
	cout<<*ptr;

}