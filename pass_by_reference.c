#include<stdio.h>
void swap(int &a,int &b){
	int temp;
	temp=a;
	a=b;
	b=temp;	

}
int main()
{
	int x,y;
	x=10;
	y=20;
	printf("swapped value of  a %d\n",x);
	printf("swapped value of  b %d\n",y);	
	swap(x,y);
	printf("swapped value of a %d\n",x);
	printf("swapped value of b %d\n",y);
}