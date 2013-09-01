// 12.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
int a[10], i,max;
printf("\n",10);
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
max=a[0];
//ToDo: It is enough to use  it for. pls merge them.
for(i=1;i<10;i++)
{
if(max<a[i]);
max=a[i];
}
//ToDo: please write in English
printf("zuidazhi%d",max);
}
