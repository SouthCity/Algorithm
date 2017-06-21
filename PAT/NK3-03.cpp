/*
 
 题目描述
 
 令Pi表示第i个素数。现任给两个正整数M <= N <= 10000，请输出PM到PN的所有素数。
 
 
 输入描述:
 
 输入在一行中给出M和N，其间以空格分隔。
 
 
 
 输出描述:
 
 输出从PM到PN的所有素数，每10个数字占1行，其间以空格分隔，但行末不得有多余空格。
 
 
 输入例子:
 
 5 27
 
 
 输出例子:
 
 11 13 17 19 23 29 31 37 41 43
 
 47 53 59 61 67 71 73 79 83 89
 
 97 101 103
 

 */

#include <iostream>
#include <limits.h>
#include <math.h>
using namespace std;

int main()
{

	int M = 0,N = 0,num = 0;
    scanf("%d %d",&M,&N);
    int array[10000] = {0};
    array[0] = 2;
    array[1] = 3;
    num = 2;
	for (int i = 2; i <= INT_MAX; ++i)
	{
		int sqr = sqrt(i);
		for (int j = 2; j <= sqr; ++j)
		 {
		 	if (i%j == 0)
		 	{
		 		break;
		 	}else if(j == sqr) {
		 		num++;
		 		array[num-1] = i;
		 	}
		 }
		 if (num >= N)
		  {
		  	break;
		  } 
	}
	int length = 0;
	for (int i = M; i <= N; ++i)
	{
		printf("%d",array[i-1]);
		length++;
		if (length == 10)
		{
			length = 0;
			printf("\n");
		}else if (i!=N)
		{
			printf(" ");
		}
	}

	return 0;
}
