// 30模拟交通信号灯.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	char colour;//输入“red", 所有的机动车停下；单车先行，行人再走（通过在屏幕上输出来模拟）。输入"green",单车、行人止步，机动车通行。
     //输入"y"，汽车缓慢行驶。
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

