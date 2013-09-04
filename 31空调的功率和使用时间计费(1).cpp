// 31空调的功率和使用时间计费.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	int power,time,cost;
	printf("please enter the data(the form is  'power time' ):");
	scanf("%d %d",&power,&time);
    printf("%dkw/h %dh\n",power,time);//此处为两个变量的单位。
	//此处有对power和time的限定。
	if (power>0&&time>0)
	cost=power*time*30*0.61,printf("the cost is:%d\n",cost);
	else printf("enter data error!\n");
	return 0;
}

