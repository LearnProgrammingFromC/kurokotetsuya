// 15.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
//TODO: It is not nessary to math here.
#include "math.h"

int main(int argc, char* argv[])
{	
	double a,b,c,disc,x1,x2,p,q;
	scanf("%lf%lf%lf",&a,&b,&c);
	disc=b*b-4*a*c;
	//ToDo: what happen if a is equal to Zero? please be careful!
	p=-b/(2.0*a);
	//TODO: Please remove no use code before commiting
	printf("hi!\n");
	//ToDo: what happen if a is equal to Zero? please be careful!
	q=sqrt(disc)/(2.0*a);
	printf("hi!\n");
	x1=p+q;
	x2=p-q;
	printf("x1=%7.2f\nx2=%7.2f\n",x1,x2);
	return 0;
}

