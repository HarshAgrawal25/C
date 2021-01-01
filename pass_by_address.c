#include <stdio.h>
void swap(int *a,int *b){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
int main(){
	int x,y;
	x=10;
	y=20;
	swap(&x,&y);
	printf("swapped value of %d\n",x);
	printf("swapped value of %d\n",y);
}