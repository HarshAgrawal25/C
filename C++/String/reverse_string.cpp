#include<iostream>
using namespace std;
void reverse_string(string a){
	int n=a.length();
	for(int i=n-1;i>=0;i--){
		cout<<a[i];
	}
}
int main(){
	string a;
	cout<<"Enter the String \n";
	getline(cin,a);
	cout<<"String to be reversed "<<a<<endl;
	reverse_string(a);
	return 0;
}