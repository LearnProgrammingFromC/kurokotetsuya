// 22.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
int main(int argc, char* argv[])
{
	float a,b,c,t;
	scanf("%f,%f,%f",&a,&b,&c);
	if(a>b)t=a;
	else t=b;
	if(c>t)t=c;
	else t=t;
	printf("max =%f\n",t);
	return (t);
}

