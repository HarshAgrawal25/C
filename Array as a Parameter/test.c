#include<stdio.h>
#include<stdlib.h>
int [] fun(int a){
	int *p;
	p=(int *)malloc(a*sizeof(int));
	return(p);
}
int main(){
	int *A;
	A=fun(5);
}