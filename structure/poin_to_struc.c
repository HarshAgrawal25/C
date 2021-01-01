#include <stdio.h>
struct Rectangle{
	int l;
	int b;
};
int main(){
	struct Rectangle	r={10,15};
	printf("%d\n",r.l);
	struct Rectangle	*p=&r;
	(*p).l=20;
	printf("%d",r.l);
}