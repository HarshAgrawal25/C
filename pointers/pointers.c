#include<stdio.h>
#include<stdlib.h>
int main(){
	int *p;
	p = (int *)malloc(0*sizeof(int));
	printf("%d\n",p );
}