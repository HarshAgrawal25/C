#include<stdio.h>

int fun(int c){
	static  int x=0;
	if(c>0){
		x++;
		return fun(c-1)+x;
	}
	return 0;
}
int main(){
	int a;
	a = fun(5);
	printf("%d\n",a);

		a = fun(5);
	printf("%d\n",a);

	return 0;
}