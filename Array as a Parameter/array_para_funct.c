#include<stdio.h>
void fun(int *A,int s){
	int i;
	A[1]=25;
	for(i=0;i<s;i++)
		printf("%d\n",A[i]);

}
int main(){
	int A[]={1,2,3,5,10};
	fun(A,5);
	

}