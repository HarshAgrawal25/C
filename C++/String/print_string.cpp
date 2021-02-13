#include<iostream>
using namespace std;
void full_string(){
	string a;
	cout<<"Enter the String \n";
	getline(cin,a);
	cout<<a<<endl;
}
void  space_string(){
	string a;
	cout<<"Enter the string \n";
	cin>>a;
	cout<<"Your answer is "<<a<<endl;;
	cout<<"Length is"<<a.length();
}

int main(){
	
	full_string();
	space_string();
	
	return 0;
}