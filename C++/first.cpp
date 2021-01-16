#include<iostream>
using namespace std;
int main() {
	int a=10;
	int *p = &a;
	
	cout<<*p<<endl; 
	cout<<p<<endl;	
	cout<< &p<<endl;
   	cout << &a<< endl;

	float j=10.2;
	float *jp=&j;
	cout<<&j<<endl;
	cout<<jp<<endl;

	double k=180.56;
	double *jk=&k;
	cout<<&k<<endl;
	cout<<jk<<endl;
}