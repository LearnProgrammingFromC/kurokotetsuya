// 30ģ�⽻ͨ�źŵ�.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	char colour;//���롰red", ���еĻ�����ͣ�£��������У��������ߣ�ͨ������Ļ�������ģ�⣩������"green",����������ֹ����������ͨ�С�
     //����"y"������������ʻ��
	printf("please enter the colour(r=red,y=yellow,g=green):");
	scanf("%c",&colour); 
	printf("the transportation:");
	switch(colour)
	{
	case 'r':printf("Motor vehicle stop,The bicycle advance,Pedestrians walk.\n");break;
    case 'y':printf("The cars drove slowly.\n");break;
    case 'g':printf("Bicycle and pedestrian stop,The passage of motor vehicles.\n");break;
	default:printf("enter data error!\n");
	}
	return 0;
}

