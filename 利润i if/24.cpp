// 24.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
//TODO: It is not nessary to math here.
#include "math.h"
int main(int argc, char* argv[])
{
	float i,g;
	scanf("%f",&i);
	//ToDo: what happen if I input -1, 0, 1?
	if(i<=100000)
	{
		g=i*0.1;
	}
	if(i>100000&&i<=200000)
	{
		g=10000+(i-100000)*0.075;
	}
	if(i>200000&&i<=400000)
	{
		g=10000+200000*0.075+(i-200000)*0.05;
	}
	if(i>400000&&i<=600000)
	{
		g=10000+200000*0.075+200000*0.05+(i-400000)*0.03;
	}
	if(i>600000&&i<=1000000)
	{
		g=10000+200000*0.075+200000*0.05+200000*0.03+(i-600000)*0.015;
	}
	if(i>1000000)
	{
		g=10000+200000*(0.075+0.05+0.03+0.015)+(i-1000000)*0.01;
	}
	printf("g=%f",g);
	return 0;
}

