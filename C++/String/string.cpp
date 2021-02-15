#include<iostream>
using namespace std;
int main(){
	string s="abc";
	cout<<s<<endl; 
	s="abcd";
	cout<<s<<"\n";
	cout<<s[0]<<endl;
	s[0] = 'n';
	cout<<s<<endl;

	string * sp=new string;
	*sp="harsh";
	cout<<sp<<"\n";
	cout<<*sp<<"\n";


	// cout<<s[0]<<"\n";
	// s[0]="n";
	// cout<<s<<"\n";
	string n ="hash";
	string s2= s + n;
	cout<<s2<<"\n";
	cout<<s2.size()<<endl;
	cout<<s2.substr(2)<<endl;
	cout<<s2.substr(3,3)<<endl;
	cout<<s2.find("ha")<<endl;

	// string ab="aklp";
	// getline(cin,ab);
	// cout<<ab;

	
	return 0;
}