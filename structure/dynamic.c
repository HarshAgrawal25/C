#include<stdio.h>
#include<stdlib.h>
struct Rectangle
{
	int l;
	int b;
};
int main(){
	struct Rectangle *p;
	p=(struct Rectangle *)malloc(sizeof(struct Rectangle));
	printf("%d\n",p->b);
	// p->l=10;
	printf("%d\n",p->l);
}