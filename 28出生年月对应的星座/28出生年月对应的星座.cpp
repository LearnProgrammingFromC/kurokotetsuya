// 28�������¶�Ӧ������.cpp : Defines the entry point for the console application.
//Aries ��������3��21�ա�4��20�գ�  Taurus ��ţ����4��21��5��21�գ�  
//��Gemini ˫������5��22�ա�6��21�գ� Cancer ��з����6��22�ա�7��22�գ�
//Leo ʨ������7��23�ա�8��23��  Virgo ��Ů����8��24�ա�9��23��
//Libra �������9��24�ա�10��23�գ�  Scorpio ��Ы����10��24�ա�11��22�գ�
//Sagittarius ��������11��23�ա�12��21�գ�  Capricorn Ħ������12��22�ա�1��20�գ�
//��Aquarius ˮƿ����1��21�ա�2��19�գ�  Pisces ˫������2��20�ա�3��20�գ�

#include "stdafx.h"

int main(int argc, char* argv[])
{
	int birthday;
	printf("please enter your birthday(the form is 101):");
	scanf("%d",&birthday);

	if(birthday>=121&&birthday<=130&&birthday>=201&&birthday<=219)
		printf("You are Aquarius.\n");

	if(birthday>=220&&birthday<=229&&birthday>=301&&birthday<=320)
		printf("You are Pisces.\n");

     if(birthday>=321&&birthday<=331&&birthday>=401&&birthday<=420)
		printf("You are Aries.\n");

     if(birthday>=421&&birthday<=430&&birthday>=501&&birthday<=521)
		printf("You are Taurus.\n");

     if(birthday>=522&&birthday<=531&&birthday>=601&&birthday<=621)
		printf("You are Gemini .\n");
	 //��Gemini ˫������5��22�ա�6��21�գ� Cancer ��з����6��22�ա�7��22�գ�


     if(birthday>=622&&birthday<=630&&birthday>=701&&birthday<=722)
		printf("You are Cancer.\n");

//Leo ʨ������7��23�ա�8��23��  Virgo ��Ů����8��24�ա�9��23��
if(birthday>=723&&birthday<=731&&birthday<=801&&birthday<=823)
		printf("You are Leo.\n");

if(birthday>=824&&birthday<=831&&birthday>=901&&birthday<=923)
		printf("You are Virgo.\n");

//Libra �������9��24�ա�10��23�գ�  Scorpio ��Ы����10��24�ա�11��22�գ�
if(birthday>=924&&birthday<=930&&birthday>=1001&&birthday<=1023)
		printf("You are Libra.\n");

if(birthday>=1024&&birthday<=1031&&birthday<=1101&&birthday<=1122)
		printf("You are Scorpio.\n");

//Sagittarius ��������11��23�ա�12��21�գ�  Capricorn Ħ������12��22�ա�1��20�գ�

if(birthday>=1123&&birthday<=1130&&birthday>=1201&&birthday<=1221)
		printf("You are Sagittarius .\n");

if(birthday>=1222&&birthday<=1231)printf("You are Capricorn.\n");
if (birthday>=101&&birthday<=120)printf("You are Capricorn.\n");


    return 0;
}

