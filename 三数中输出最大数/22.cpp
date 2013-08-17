// 22.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "math.h"
int main(int argc, char* argv[])
{
	float a,b,c,t;
	scanf("%f,%f,%f",&a,&b,&c);
	if(a>b)
	{
		t=a;
		a=b;
		b=c;
	}//a<=b
	if(a>c)
	{
		t=a;
		a=c;
		c=t;
	}//a<=c
	if(b>c)
	{
		t=b;
		b=c;
		c=t;
	}//b<=c
	printf("%5.2f\n",c);
	return 0;
}

