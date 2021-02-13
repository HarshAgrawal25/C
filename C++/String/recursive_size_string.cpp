#include<iostream>
using namespace std;
int length(char s[]){
	if(s[0] == '\0'){
		return 0;
	}
	int value = length(s+1);
	return value + 1;
}
int main(){
	char str[100];
	cout<<"Enter the String\n";
	cin>>str;
	int l =length(str);
	cout<<l<<endl;
	return 0;
}