#include<iostream>
using std::cout;
using std::cin;
int main(){
	int n,r,s=0;
	cout<<"Entera number\n";
	cin>>n;
	while(n != 0){
		r = n%10;
		s=s+r;
		n=n/10;
	}
	cout<<s;
	return 0;
}