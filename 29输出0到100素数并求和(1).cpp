// 29输出0到100素数并求和.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include"math.h"
int main(int argc, char* argv[])
{
    int i,k,n,m,sum=0;

    for(n=2;n<=100;n=n+1)
	{
        k=sqrt(n);
		for(i=2;i<=n/2;i++)

		if(n%i==0)break;
		if(i>=k+1)
		{
		printf("%d ",n);
		sum=sum+n;
		m=m+1;
		}
		if(m%10==0)
		printf("\n");
	}
	printf("sum=%d",sum);
	printf("\n");
	return 0;
}


