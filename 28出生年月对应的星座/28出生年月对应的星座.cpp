// 28出生年月对应的星座.cpp : Defines the entry point for the console application.
//Aries 白羊座（3月21日～4月20日）  Taurus 金牛座（4月21～5月21日）  
//　Gemini 双子座（5月22日～6月21日） Cancer 巨蟹座（6月22日～7月22日）
//Leo 狮子座（7月23日～8月23日  Virgo 处女座（8月24日～9月23日
//Libra 天秤座（9月24日～10月23日）  Scorpio 天蝎座（10月24日～11月22日）
//Sagittarius 射手座（11月23日～12月21日）  Capricorn 摩羯座（12月22日～1月20日）
//　Aquarius 水瓶座（1月21日～2月19日）  Pisces 双鱼座（2月20日～3月20日）

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
	 //　Gemini 双子座（5月22日～6月21日） Cancer 巨蟹座（6月22日～7月22日）


     if(birthday>=622&&birthday<=630&&birthday>=701&&birthday<=722)
		printf("You are Cancer.\n");

//Leo 狮子座（7月23日～8月23日  Virgo 处女座（8月24日～9月23日
if(birthday>=723&&birthday<=731&&birthday<=801&&birthday<=823)
		printf("You are Leo.\n");

if(birthday>=824&&birthday<=831&&birthday>=901&&birthday<=923)
		printf("You are Virgo.\n");

//Libra 天秤座（9月24日～10月23日）  Scorpio 天蝎座（10月24日～11月22日）
if(birthday>=924&&birthday<=930&&birthday>=1001&&birthday<=1023)
		printf("You are Libra.\n");

if(birthday>=1024&&birthday<=1031&&birthday<=1101&&birthday<=1122)
		printf("You are Scorpio.\n");

//Sagittarius 射手座（11月23日～12月21日）  Capricorn 摩羯座（12月22日～1月20日）

if(birthday>=1123&&birthday<=1130&&birthday>=1201&&birthday<=1221)
		printf("You are Sagittarius .\n");

if(birthday>=1222&&birthday<=1231)printf("You are Capricorn.\n");
if (birthday>=101&&birthday<=120)printf("You are Capricorn.\n");


    return 0;
}

