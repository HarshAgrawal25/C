#include<iostream>
using namespace std;
int main(){
	int i=10;
	int* p=&i;
	//cout<< p <<endl;
	//cout<<*p<<endl;
	//cout<<sizeof(p)<<endl;
	
	cout<<&p<<endl;
	cout<<p<<endl;
	cout<<*p<<endl;
	cout<<&i<<endl;	
	cout<<i<<endl;
	cout<<*p<<endl;
	i++;
	cout<<i<<endl;
	cout<<*p<<endl;
}
