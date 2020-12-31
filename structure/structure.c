#include<stdio.h>

struct Rectangle
{
	int length;
	int breadth;
};

int main()
{

struct Rectangle r={10,5};
r.length=21;
printf("Area of rectangle is %d", r.length*r.breadth);
}
