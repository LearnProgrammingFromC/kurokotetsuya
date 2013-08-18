// 17.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main()
{
	//ToDO. There are too much variable. I don't understand. Please write some comment.
	float p0=1000,r1=0.0414f,r2=0.0468f,r3=0.054f,r4=0.0585f,r5=0.0072f,p1,p2,p3,p4,p5;
	p1=p0*(1+r5);
	p2=p0*(1+r2)*(1+r3);
	p3=p0*(1+r3)*(1+r2);
	p4=p0*(1+r1)*(1+r1)*(1+r1)*(1+r1)*(1+r1);
	p5=p0*(1+r5)*(1+r5)*(1+r5)*(1+r5)*(1+r5)*(1+r5)*(1+r5)*(1+r5)*(1+r5)*(1+r5)*(1+r5)*(1+r5)*(1+r5)*(1+r5)*(1+r5)*(1+r5)*(1+r5)*(1+r5)*(1+r5)*(1+r5);
	printf("p1=%f\np2=%f\np3=%f\np4=%f\np5=%f\n",p1,p2,p3,p4,p5);
	return 0;
}
