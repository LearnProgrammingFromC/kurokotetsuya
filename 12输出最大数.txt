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
for(i=1;i<10;i++)
{
if(max<a[i]);
max=a[i];
}
printf("zuidazhi%d",max);
}
