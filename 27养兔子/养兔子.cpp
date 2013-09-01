// 养兔子.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
//{为何i小于等于38，会有40个月
	//int f1=1,f2=1,f3;
	//int i;
	//printf("%12d\n%12d\n",f1,f2);
	//for(i=1;i<=38;i++)
	//{
	//	f3=f1+f2;
	//	printf("%12d\n",f3);
	//	f1=f2;
	//	f2=f3;
	//}
	//return 0;
//}


{
	int f1=1,f2=1;
	int i;
	for(i=1;i<=20;i++)//每个循环中输出2个月的数据，故循环20次即可
	{
		printf("%12d %12d",f1,f2);
		if(i%2==0)printf("\n");
		f1=f1+f2;
		f2=f2+f1;
	}
	return 0;
}
