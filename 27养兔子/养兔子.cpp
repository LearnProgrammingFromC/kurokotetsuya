// ������.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
//{Ϊ��iС�ڵ���38������40����
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
	for(i=1;i<=20;i++)//ÿ��ѭ�������2���µ����ݣ���ѭ��20�μ���
	{
		printf("%12d %12d",f1,f2);
		if(i%2==0)printf("\n");
		f1=f1+f2;
		f2=f2+f1;
	}
	return 0;
}
