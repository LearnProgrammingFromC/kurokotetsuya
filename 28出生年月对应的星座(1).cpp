// 28�������¶�Ӧ������.cpp : Defines the entry point for the console application.
//Aries ��������3��21�ա�4��20�գ�  Taurus ��ţ����4��21��5��21�գ�  
//��Gemini ˫������5��22�ա�6��21�գ� Cancer ��з����6��22�ա�7��22�գ�
//Leo ʨ������7��23�ա�8��23��  Virgo ��Ů����8��24�ա�9��23��
//Libra �������9��24�ա�10��23�գ�  Scorpio ��Ы����10��24�ա�11��22�գ�
//Sagittarius ��������11��23�ա�12��21�գ�  Capricorn Ħ������12��22�ա�1��20�գ�
//��Aquarius ˮƿ����1��21�ա�2��19�գ�  Pisces ˫������2��20�ա�3��20�գ�

#include "stdafx.h"
//      28(2)���ļ�Ϊswitch��д��
int main(int argc, char* argv[])
{
	int birthday;
	printf("please enter your birthday(the form is 101):");
	scanf("%d",&birthday);

if(birthday>120&&birthday<=130)printf("You are Aquarius.\n");
else printf("enter data error!\n");
if(birthday>200&&birthday<=219)printf("You are Aquarius.\n");
else printf("enter data error!\n");

if(birthday>219&&birthday<230)	printf("You are Pisces.\n");
else printf("enter data error!\n");
if(birthday>=301&&birthday<321)printf("You are Pisces.\n");
else printf("enter data error!\n");

if(birthday>320&&birthday<332)printf("You are Aries.\n");
else printf("enter data error!\n");
if(birthday>400&&birthday<421)printf("You are Aries.\n");
else printf("enter data error!\n");

if(birthday>420&&birthday<431)printf("You are Taurus.\n");
else printf("enter data error!\n");
if(birthday>500&&birthday<522)printf("You are Taurus.\n");
else printf("enter data error!\n");

if(birthday>521&&birthday<=531)printf("You are Gemini .\n");
else printf("enter data error!\n");
if( birthday>600&&birthday<622)printf("You are Gemini .\n");
else printf("enter data error!\n");
	 


if(birthday>621&&birthday<631)printf("You are Cancer.\n");
else printf("enter data error!\n");
if(birthday>700&&birthday<723)printf("You are Cancer.\n");
else printf("enter data error!\n");

if(birthday>722&&birthday<732)printf("You are Leo.\n");
else printf("enter data error!\n");
if(birthday>800&&birthday<824)printf("You are Leo.\n");
else printf("enter data error!\n");
		
if(birthday>823&&birthday<832)printf("You are Virgo.\n");
else printf("enter data error!\n");
if(birthday>900&&birthday<924)printf("You are Virgo.\n");
else printf("enter data error!\n");
		


if(birthday>923&&birthday<931)printf("You are Libra.\n");
else printf("enter data error!\n");
if(birthday>1000&&birthday<1024)printf("You are Libra.\n");
else printf("enter data error!\n");

if(birthday>1023&&birthday<1032)printf("You are Scorpio.\n");
else printf("enter data error!\n");
if(birthday>1100&&birthday<1123)printf("You are Scorpio.\n");
	else printf("enter data error!\n");



if(birthday>1122&&birthday<1131)printf("You are Sagittarius .\n");
else printf("enter data error!\n");
if(birthday>1200&&birthday<1222)printf("You are Sagittarius .\n");
else printf("enter data error!\n");

		
if(birthday>1221&&birthday<1232)printf("You are Capricorn.\n");
else printf("enter data error!\n");
if (birthday>100&&birthday<121)printf("You are Capricorn.\n");
else printf("enter data error!\n");


    return 0;
}

