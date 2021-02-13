#include<iostream>
using namespace std;
void removex(char str[]){
	if(str[0] == '\0')
		return ;
	if(str[0] != 'x'){
		removex(str+1);
	}
	else{
		int i;
		for(i=1;str[i] != '\0';i++){
			str[i-1] = str[i];
		}
		str[i-1]=str[i];
		removex(str);
	}
}
int main(){
	char str[100];
	cout<<"Enter the size of array\n";
	cin>>str;
	removex(str);
	cout<<str;
	return 0;
}