#include<stdio.h>
int fun(int c){
	
	if(c>0){
		
		return fun(c-1)+c;
	}
	return 0;
}
int main(){
	int a;
	a = fun(5);
	printf("%d\n",a);
	return 0;
}