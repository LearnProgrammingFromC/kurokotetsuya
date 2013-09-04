// 28出生年月对应的星座.cpp : Defines the entry point for the console application.
//Aries 白羊座（3月21日～4月20日）  Taurus 金牛座（4月21～5月21日）  
//　Gemini 双子座（5月22日～6月21日） Cancer 巨蟹座（6月22日～7月22日）
//Leo 狮子座（7月23日～8月23日  Virgo 处女座（8月24日～9月23日
//Libra 天秤座（9月24日～10月23日）  Scorpio 天蝎座（10月24日～11月22日）
//Sagittarius 射手座（11月23日～12月21日）  Capricorn 摩羯座（12月22日～1月20日）
//　Aquarius 水瓶座（1月21日～2月19日）  Pisces 双鱼座（2月20日～3月20日）

#include "stdafx.h"
//      28(2)的文件为switch的写法
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

