// 23.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "math.h"
int main(int argc, char* argv[])
{
	float x,y;
	scanf("%f,%f",&x,&y);
	if(x<1)
	{
		y=x;
	}
	if(x>=1,x<10)
	{
		y=2*x-1;
	}
	if(x>=10)
	{
		y=3*x-11;
	}
	printf("%5.2f\n",y);
	return 0;
}

