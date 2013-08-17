// 25.cpp : Defines the entry point for the console application.
//
//g=a+(i-b)*c
#include "stdafx.h"
#include "math.h"
int main(int argc, char* argv[])
{   
	int c;
	float a,b;
	float i,g=0;
scanf("%f",&i);
if(i>0&&i<=100000)c=100;
else if(i<=200000)c=75;
else if(i<=400000)c=50;
else if(i<=600000)c=30;
else if(i<=1000000)c=15;
else if(i>1000000)c=10;
switch(c)
{
case 100 :a=0;b=0;break;
case 75:a=10000;b=100000;break;
case 50:a=17500;b=200000;break;
case 30:a=27500;b=400000;break;
case 15:a=33500;b=600000;break;
case 10:a=39500;b=1000000;break;
default:printf("enter data error!\n");
}
g=a+(i-b)*c/1000;
printf("your get:%f\n",g);
return 0;
}

