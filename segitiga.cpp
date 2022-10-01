#include <iostream>
#include <cstdio>

int main()
{
	float a, b, c;
	printf("3 Types of the Triangle\n");
	printf("a, b, c : \n");
	scanf("%f %f %f", &a, &b, &c);
	if(a==b && b==c)
	{
		printf("it is equilateral triangle");
	}
	else if(a!=b && b!=c && a!=c)
	{
		printf("it is scalene triangle");
	}
	else
	{
		printf("it is isosceles triangle");
	}
	system("pause>0");
}
